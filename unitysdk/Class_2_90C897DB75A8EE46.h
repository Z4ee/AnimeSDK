#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/AComponentUpdateHandler_1.h"

class Class_0_16E4307DCC419505_38;
class Class_1_733D6D14113226E3;
class Class_3_E7D29F43FB80184D;
namespace Entitas { class IEntity; }

#define CLASS_2_90C897DB75A8EE46_METHOD_2_5978E8B377C8DAAD_OFFSET UNITYSDK_OFFSET(0x17D38AE0)
#define CLASS_2_90C897DB75A8EE46_METHOD_2_8730241629BAFEC3_OFFSET UNITYSDK_OFFSET(0x17D38920)
#define CLASS_2_90C897DB75A8EE46_METHOD_2_D2AA63D961B526C9_OFFSET UNITYSDK_OFFSET(0x17D38CB0)
#define CLASS_2_90C897DB75A8EE46_ONADD_OFFSET UNITYSDK_OFFSET(0x17D38860)
#define CLASS_2_90C897DB75A8EE46_ONREMOVE_OFFSET UNITYSDK_OFFSET(0x17D38A90)
#define CLASS_2_90C897DB75A8EE46_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x17D389A0)
#define CLASS_2_90C897DB75A8EE46__CTOR_OFFSET UNITYSDK_OFFSET(0x17D38ED0)

inline static constexpr unsigned int Class_2_90C897DB75A8EE46_TypeDefinitionIndex = 78653;

class Class_2_90C897DB75A8EE46 : public ::RPG::Client::LittleGameShare::AComponentUpdateHandler_1<::Class_1_733D6D14113226E3*>
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_90C897DB75A8EE46__CTOR_OFFSET))(this);
	}

	::System::Void OnAdd(::Entitas::IEntity* a1, ::Class_1_733D6D14113226E3* a2, ::Class_0_16E4307DCC419505_38* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::Class_1_733D6D14113226E3*, ::Class_0_16E4307DCC419505_38*))((::PBYTE)hIl2Cpp + CLASS_2_90C897DB75A8EE46_ONADD_OFFSET))(this, a1, a2, a3);
	}

	::System::Void OnUpdate(::Entitas::IEntity* a1, ::Class_1_733D6D14113226E3* a2, ::Class_0_16E4307DCC419505_38* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::Class_1_733D6D14113226E3*, ::Class_0_16E4307DCC419505_38*))((::PBYTE)hIl2Cpp + CLASS_2_90C897DB75A8EE46_ONUPDATE_OFFSET))(this, a1, a2, a3);
	}

	::System::Void OnRemove(::Entitas::IEntity* a1, ::Class_0_16E4307DCC419505_38* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::Class_0_16E4307DCC419505_38*))((::PBYTE)hIl2Cpp + CLASS_2_90C897DB75A8EE46_ONREMOVE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_5978E8B377C8DAAD(::Class_1_733D6D14113226E3* a1, ::Class_0_16E4307DCC419505_38* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_733D6D14113226E3*, ::Class_0_16E4307DCC419505_38*))((::PBYTE)hIl2Cpp + CLASS_2_90C897DB75A8EE46_METHOD_2_5978E8B377C8DAAD_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_8730241629BAFEC3(::Class_1_733D6D14113226E3* a1, ::Class_0_16E4307DCC419505_38* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_733D6D14113226E3*, ::Class_0_16E4307DCC419505_38*))((::PBYTE)hIl2Cpp + CLASS_2_90C897DB75A8EE46_METHOD_2_8730241629BAFEC3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_D2AA63D961B526C9(::Class_3_E7D29F43FB80184D* a1, ::System::Int32 a2, ::Class_0_16E4307DCC419505_38* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_E7D29F43FB80184D*, ::System::Int32, ::Class_0_16E4307DCC419505_38*))((::PBYTE)hIl2Cpp + CLASS_2_90C897DB75A8EE46_METHOD_2_D2AA63D961B526C9_OFFSET))(this, a1, a2, a3);
	}
};
