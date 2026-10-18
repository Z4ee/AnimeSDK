#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MechCraftEffectType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_1_04F54F1AFB979327_METHOD_1_42BACE3BC7DBBCAD_OFFSET UNITYSDK_OFFSET(0x1D204E30)
#define CLASS_1_04F54F1AFB979327__CTOR_OFFSET UNITYSDK_OFFSET(0x1D204FC0)

inline static constexpr unsigned int Class_1_04F54F1AFB979327_TypeDefinitionIndex = 11998;

class Class_1_04F54F1AFB979327 : public ::System::Object
{
public:
	::Il2CppArray<::System::Int32>* PBLPLDJKPEI; // 0x10
	::System::UInt32 PHFMCACHFIJ; // 0x18
	::RPG::GameCore::MechCraftEffectType GMPGDEINODK; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_04F54F1AFB979327__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_42BACE3BC7DBBCAD(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_04F54F1AFB979327*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_04F54F1AFB979327*&))((::PBYTE)hIl2Cpp + CLASS_1_04F54F1AFB979327_METHOD_1_42BACE3BC7DBBCAD_OFFSET))(a1, a2);
	}
};
