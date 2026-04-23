#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/ComponentInvisibleReason.h"
#include "unitysdk/System/Object.h"

namespace RPG { template <typename T1, typename T2> class PoolDictionary_2; }
namespace System { class String; }

#define CLASS_1_69C7B9DFD5B449A1_CLEAR_OFFSET UNITYSDK_OFFSET(0x18056600)
#define CLASS_1_69C7B9DFD5B449A1_METHOD_1_1D1B889025773E2C_OFFSET UNITYSDK_OFFSET(0x18056440)
#define CLASS_1_69C7B9DFD5B449A1__CTOR_OFFSET UNITYSDK_OFFSET(0x18056660)

inline static constexpr unsigned int Class_1_69C7B9DFD5B449A1_TypeDefinitionIndex = 39120;

class Class_1_69C7B9DFD5B449A1 : public ::System::Object
{
public:
	::RPG::PoolDictionary_2<::System::String*, ::RPG::Client::LittleGame::FiveDim::ComponentInvisibleReason>* Field_1_1; // 0x10
	::RPG::Client::LittleGame::FiveDim::ComponentInvisibleReason Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_69C7B9DFD5B449A1__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_1D1B889025773E2C(::RPG::Client::LittleGame::FiveDim::ComponentInvisibleReason a1, ::System::Boolean a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::ComponentInvisibleReason, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_69C7B9DFD5B449A1_METHOD_1_1D1B889025773E2C_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_69C7B9DFD5B449A1_CLEAR_OFFSET))(this);
	}
};
