#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class CharacterShaderPropertyTransition; }
namespace RPG::Client { class MonoEffect; }
namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_8C01F4196D770BEF_CLEAR_OFFSET UNITYSDK_OFFSET(0xA1F0F80)
#define CLASS_1_8C01F4196D770BEF_METHOD_1_95F42805919B2C8A_OFFSET UNITYSDK_OFFSET(0xA1F0BD0)
#define CLASS_1_8C01F4196D770BEF_METHOD_1_B517E01E6878D795_OFFSET UNITYSDK_OFFSET(0xA1F0A90)
#define CLASS_1_8C01F4196D770BEF_METHOD_1_BF4AFE154C7B2C60_OFFSET UNITYSDK_OFFSET(0xA1F0CF0)
#define CLASS_1_8C01F4196D770BEF__CTOR_OFFSET UNITYSDK_OFFSET(0xA1F1020)

inline static constexpr unsigned int Class_1_8C01F4196D770BEF_TypeDefinitionIndex = 57059;

class Class_1_8C01F4196D770BEF : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::RPG::Client::MonoEffect*>* Field_1_2; // 0x10
	::RPG::GameCore::GameEntity* Field_1_0; // 0x18
	::System::Collections::Generic::List_1<::RPG::Client::CharacterShaderPropertyTransition*>* Field_1_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8C01F4196D770BEF__CTOR_OFFSET))(this);
	}

	::Class_1_8C01F4196D770BEF* Method_1_B517E01E6878D795(::RPG::GameCore::GameEntity* a1)
	{
		return ((::Class_1_8C01F4196D770BEF*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_8C01F4196D770BEF_METHOD_1_B517E01E6878D795_OFFSET))(this, a1);
	}

	::System::Void Method_1_95F42805919B2C8A(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_8C01F4196D770BEF_METHOD_1_95F42805919B2C8A_OFFSET))(this, a1);
	}

	::System::Void Method_1_BF4AFE154C7B2C60(::System::Int32 a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_8C01F4196D770BEF_METHOD_1_BF4AFE154C7B2C60_OFFSET))(this, a1, a2);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8C01F4196D770BEF_CLEAR_OFFSET))(this);
	}
};
