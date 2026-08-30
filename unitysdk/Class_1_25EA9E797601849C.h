#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateRinHouguOwnerType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_1_25EA9E797601849C_METHOD_1_1FAE1389D4EFD9B1_OFFSET UNITYSDK_OFFSET(0x16F4CCC0)
#define CLASS_1_25EA9E797601849C__CTOR_OFFSET UNITYSDK_OFFSET(0x16F4D020)

inline static constexpr unsigned int Class_1_25EA9E797601849C_TypeDefinitionIndex = 11556;

class Class_1_25EA9E797601849C : public ::System::Object
{
public:
	::System::String* GAIFKHJMCJO; // 0x10
	::System::String* GKLAPFJKONI; // 0x18
	::System::String* LFMFLBMDCGE; // 0x20
	::System::String* EMFJFPAAEMB; // 0x28
	::System::String* MEPIMHPJKPP; // 0x30
	::System::String* NCCJOMIOKML; // 0x38
	::System::String* OHMIIOMCIMA; // 0x40
	::System::UInt32 HHDMOCBJKOF; // 0x48
	::RPG::GameCore::FateRinHouguOwnerType GHNJCLNKGHH; // 0x4C
	::System::UInt32 PKJDFMCKNMC; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_25EA9E797601849C__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_1FAE1389D4EFD9B1(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_25EA9E797601849C*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_25EA9E797601849C*&))((::PBYTE)hIl2Cpp + CLASS_1_25EA9E797601849C_METHOD_1_1FAE1389D4EFD9B1_OFFSET))(a1, a2);
	}
};
