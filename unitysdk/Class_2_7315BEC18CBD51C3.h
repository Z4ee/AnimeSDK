#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_FD611945730E269E.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_1141;
class Class_2_48960C526AFA0F72;
namespace RPG::Client::Prop { class DuelChimeraProxy; }

#define CLASS_2_7315BEC18CBD51C3_METHOD_2_48EE6F8CA58AC368_OFFSET UNITYSDK_OFFSET(0x916BA90)
#define CLASS_2_7315BEC18CBD51C3_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x916C500)
#define CLASS_2_7315BEC18CBD51C3_METHOD_2_793FFA9A76FE6840_OFFSET UNITYSDK_OFFSET(0x916C560)
#define CLASS_2_7315BEC18CBD51C3_METHOD_2_B9A97467188E4B69_OFFSET UNITYSDK_OFFSET(0x916B4D0)
#define CLASS_2_7315BEC18CBD51C3__CTOR_OFFSET UNITYSDK_OFFSET(0x916B4C0)

inline static constexpr unsigned int Class_2_7315BEC18CBD51C3_TypeDefinitionIndex = 71761;

class Class_2_7315BEC18CBD51C3 : public ::Class_1_FD611945730E269E
{
public:
	::RPG::Client::Prop::DuelChimeraProxy* Field_2_3; // 0x18
	::RPG::Client::Prop::DuelChimeraProxy* Field_2_2; // 0x20
	::Class_2_48960C526AFA0F72* Field_2_0; // 0x28
	::Class_0_16E4307DCC419505_1141* Field_2_1; // 0x30
	::System::Single Field_2_8; // 0x38
	::UnityEngine::Quaternion Field_2_6; // 0x3C
	::UnityEngine::Vector3 Field_2_5; // 0x4C
	::System::Single Field_2_9; // 0x58
	::UnityEngine::Vector3 Field_2_4; // 0x5C
	::UnityEngine::Quaternion Field_2_7; // 0x68

	::System::Void _ctor(::Class_2_48960C526AFA0F72* a1, ::Class_0_16E4307DCC419505_1141* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_48960C526AFA0F72*, ::Class_0_16E4307DCC419505_1141*))((::PBYTE)hIl2Cpp + CLASS_2_7315BEC18CBD51C3__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_B9A97467188E4B69()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7315BEC18CBD51C3_METHOD_2_B9A97467188E4B69_OFFSET))(this);
	}

	::System::Void Method_2_48EE6F8CA58AC368(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_7315BEC18CBD51C3_METHOD_2_48EE6F8CA58AC368_OFFSET))(this, a1);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7315BEC18CBD51C3_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_2_793FFA9A76FE6840(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_7315BEC18CBD51C3_METHOD_2_793FFA9A76FE6840_OFFSET))(this, P0);
	}
};
