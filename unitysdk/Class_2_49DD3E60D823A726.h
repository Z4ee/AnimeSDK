#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/Class_2_49DD3E60D823A726_DiffState.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }

#define CLASS_2_49DD3E60D823A726_GET_ISDISABLED_OFFSET UNITYSDK_OFFSET(0x12382150)
#define CLASS_2_49DD3E60D823A726_METHOD_2_092CD57850778EFC_OFFSET UNITYSDK_OFFSET(0x12382070)
#define CLASS_2_49DD3E60D823A726_METHOD_2_0D64FB84CB8E6995_OFFSET UNITYSDK_OFFSET(0x12381F30)
#define CLASS_2_49DD3E60D823A726_METHOD_2_14045882BC5C6CA9_OFFSET UNITYSDK_OFFSET(0x12381AB0)
#define CLASS_2_49DD3E60D823A726_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x12381E80)
#define CLASS_2_49DD3E60D823A726_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x12381C10)
#define CLASS_2_49DD3E60D823A726_METHOD_2_5388312B490900A3_OFFSET UNITYSDK_OFFSET(0x12381B00)
#define CLASS_2_49DD3E60D823A726_METHOD_2_8688348781421DAF_OFFSET UNITYSDK_OFFSET(0x12381820)
#define CLASS_2_49DD3E60D823A726_METHOD_2_97D83E4CB3B11935_OFFSET UNITYSDK_OFFSET(0x12381C80)
#define CLASS_2_49DD3E60D823A726_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x12381A40)
#define CLASS_2_49DD3E60D823A726_METHOD_2_D978819B0A4871A0_OFFSET UNITYSDK_OFFSET(0x12382040)
#define CLASS_2_49DD3E60D823A726_SET_ISDISABLED_OFFSET UNITYSDK_OFFSET(0x12382160)
#define CLASS_2_49DD3E60D823A726__CTOR_OFFSET UNITYSDK_OFFSET(0x12382170)
#define CLASS_2_49DD3E60D823A726__ONBIND_OFFSET UNITYSDK_OFFSET(0x12381730)
#define CLASS_2_49DD3E60D823A726__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x12381FF0)
#define CLASS_2_49DD3E60D823A726__ONTICK_OFFSET UNITYSDK_OFFSET(0x12381ED0)
#define CLASS_2_49DD3E60D823A726___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x123821B0)
#define CLASS_2_49DD3E60D823A726___IFIXBASEPROXY__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x12382280)
#define CLASS_2_49DD3E60D823A726___IFIXBASEPROXY__ONTICK_OFFSET UNITYSDK_OFFSET(0x12382210)

inline static constexpr unsigned int Class_2_49DD3E60D823A726_TypeDefinitionIndex = 66473;

class Class_2_49DD3E60D823A726 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::Single Field_2_7; // 0x0
	// static const ::System::String* Field_2_11; // 0x0
	// static const ::System::String* Field_2_12; // 0x0
	::UnityEngine::UI::Text* Field_2_1; // 0x60
	::System::Action_1<::System::UInt32>* Field_2_8; // 0x68
	::UnityEngine::Animation* Field_2_2; // 0x70
	::UnityEngine::UI::Image* Field_2_0; // 0x78
	::UnityEngine::Transform* Field_2_3; // 0x80
	::RPG::GameCore::GameEntity* Field_2_9; // 0x88
	::Class_2_49DD3E60D823A726_DiffState Field_2_5; // 0x90
	::System::Boolean _IsDisabled_k__BackingField; // 0x94
	::System::Int32 Field_2_4; // 0x98
	::System::Single Field_2_6; // 0x9C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_49DD3E60D823A726__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_49DD3E60D823A726__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_8688348781421DAF(::RPG::GameCore::GameEntity* a1, ::System::Int32 a2, ::System::Action_1<::System::UInt32>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Int32, ::System::Action_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_2_49DD3E60D823A726_METHOD_2_8688348781421DAF_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_5388312B490900A3(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_49DD3E60D823A726_METHOD_2_5388312B490900A3_OFFSET))(this, a1);
	}

	::System::Void Method_2_97D83E4CB3B11935()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_49DD3E60D823A726_METHOD_2_97D83E4CB3B11935_OFFSET))(this);
	}

	::System::Boolean Method_2_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_49DD3E60D823A726_METHOD_2_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void _OnTick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_49DD3E60D823A726__ONTICK_OFFSET))(this, a1);
	}

	::System::Void _OnDispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_49DD3E60D823A726__ONDISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_49DD3E60D823A726_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_49DD3E60D823A726_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_0D64FB84CB8E6995(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_49DD3E60D823A726_METHOD_2_0D64FB84CB8E6995_OFFSET))(this, a1);
	}

	::System::Void Method_2_14045882BC5C6CA9(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_49DD3E60D823A726_METHOD_2_14045882BC5C6CA9_OFFSET))(this, a1);
	}

	::System::Void Method_2_092CD57850778EFC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_49DD3E60D823A726_METHOD_2_092CD57850778EFC_OFFSET))(this);
	}

	::System::UInt32 Method_2_D978819B0A4871A0()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_49DD3E60D823A726_METHOD_2_D978819B0A4871A0_OFFSET))(this);
	}

	::System::Boolean get_IsDisabled()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_49DD3E60D823A726_GET_ISDISABLED_OFFSET))(this);
	}

	::System::Void set_IsDisabled(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_49DD3E60D823A726_SET_ISDISABLED_OFFSET))(this, value);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_49DD3E60D823A726___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnTick(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_49DD3E60D823A726___IFIXBASEPROXY__ONTICK_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy__OnDispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_49DD3E60D823A726___IFIXBASEPROXY__ONDISPOSE_OFFSET))(this);
	}
};
