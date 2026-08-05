#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_09FE3F395792D86A.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_198;
class Class_1_236FD73ABC492E3F;
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGBLACKBOARDPARAM_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x747810)
#define MOLEMOLE_CONFIG_CONFIGBLACKBOARDPARAM_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x7478B0)
#define MOLEMOLE_CONFIG_CONFIGBLACKBOARDPARAM_FROMFLX_OFFSET UNITYSDK_OFFSET(0x747820)
#define MOLEMOLE_CONFIG_CONFIGBLACKBOARDPARAM_METHOD_2_1F8314262457963A_OFFSET UNITYSDK_OFFSET(0x747920)
#define MOLEMOLE_CONFIG_CONFIGBLACKBOARDPARAM_METHOD_2_D4DA1493472613E6_OFFSET UNITYSDK_OFFSET(0x747940)
#define MOLEMOLE_CONFIG_CONFIGBLACKBOARDPARAM_METHOD_2_DFBF488726E6829A_OFFSET UNITYSDK_OFFSET(0x747910)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigBlackboardParam_TypeDefinitionIndex = 68833;

	struct alignas(8) ConfigBlackboardParam
	{
		::System::String* Key; // 0x10
		::Enum_3_09FE3F395792D86A ParamType; // 0x18
		::System::Boolean BoolValue; // 0x1C
		::System::Int32 IntValue; // 0x20
		::System::Single FloatValue; // 0x24
		::System::String* StringValue; // 0x28
		::UnityEngine::Vector3 VectorValue; // 0x30

		::System::Void ExposeMember(::Class_0_16E4307DCC419505_198* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_198*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGBLACKBOARDPARAM_EXPOSEMEMBER_OFFSET))(this, a1, a2);
		}

		/*
		::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGBLACKBOARDPARAM_FROMFLX_OFFSET))(this, a1);
		}
		*/

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGBLACKBOARDPARAM_FROMBINARY_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_2_DFBF488726E6829A(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGBLACKBOARDPARAM_METHOD_2_DFBF488726E6829A_OFFSET))(this, a1, a2);
		}

		/*
		::Struct_2_A47ACAABA9AAFE92 Method_2_1F8314262457963A()
		{
			return ((::Struct_2_A47ACAABA9AAFE92(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGBLACKBOARDPARAM_METHOD_2_1F8314262457963A_OFFSET))(this);
		}
		*/

		/*
		::System::Boolean Method_2_D4DA1493472613E6(::FlexBuffers::FlxMap a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGBLACKBOARDPARAM_METHOD_2_D4DA1493472613E6_OFFSET))(this, a1);
		}
		*/
	};
}
