#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_3_9AC44AECA5589F32;
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client { class UIStateCtrl; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }

#define CLASS_2_89C28D3A79219BEA_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x14C5E130)
#define CLASS_2_89C28D3A79219BEA_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x14C5E250)
#define CLASS_2_89C28D3A79219BEA_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x14C5CA50)
#define CLASS_2_89C28D3A79219BEA_GET_TRANS_OFFSET UNITYSDK_OFFSET(0x14C5CA70)
#define CLASS_2_89C28D3A79219BEA_METHOD_2_06330CD58CB602B6_OFFSET UNITYSDK_OFFSET(0x14C5DC70)
#define CLASS_2_89C28D3A79219BEA_METHOD_2_368B5D43181B5CF0_OFFSET UNITYSDK_OFFSET(0x14C5D990)
#define CLASS_2_89C28D3A79219BEA_METHOD_2_3787E953EE385D05_OFFSET UNITYSDK_OFFSET(0x14C5D760)
#define CLASS_2_89C28D3A79219BEA_METHOD_2_39590AB2089F9F4D_OFFSET UNITYSDK_OFFSET(0x14C5D360)
#define CLASS_2_89C28D3A79219BEA_METHOD_2_39EF8484D354ADC7_OFFSET UNITYSDK_OFFSET(0x14C5D010)
#define CLASS_2_89C28D3A79219BEA_METHOD_2_464F9487BF0D77F8_1_OFFSET UNITYSDK_OFFSET(0x14C5E000)
#define CLASS_2_89C28D3A79219BEA_METHOD_2_464F9487BF0D77F8_OFFSET UNITYSDK_OFFSET(0x14C5DED0)
#define CLASS_2_89C28D3A79219BEA_METHOD_2_7646FFE662147970_OFFSET UNITYSDK_OFFSET(0x14C5CC60)
#define CLASS_2_89C28D3A79219BEA_METHOD_2_870AF3CD1D0A67B1_OFFSET UNITYSDK_OFFSET(0x14C5D260)
#define CLASS_2_89C28D3A79219BEA_METHOD_2_9690E21CE863FF6C_OFFSET UNITYSDK_OFFSET(0x14C5D900)
#define CLASS_2_89C28D3A79219BEA_METHOD_2_9C25D81B36F50A81_OFFSET UNITYSDK_OFFSET(0x14C5CE00)
#define CLASS_2_89C28D3A79219BEA_METHOD_2_AD1EEF8F6B87D2FC_OFFSET UNITYSDK_OFFSET(0x14C5DE60)
#define CLASS_2_89C28D3A79219BEA_METHOD_2_B2FD964C82B25DEB_OFFSET UNITYSDK_OFFSET(0x14C5D210)
#define CLASS_2_89C28D3A79219BEA_METHOD_2_BAFE8DC12CA1CDF9_OFFSET UNITYSDK_OFFSET(0x14C5CB00)
#define CLASS_2_89C28D3A79219BEA_METHOD_2_C6835D0742A4900A_OFFSET UNITYSDK_OFFSET(0x14C5DA50)
#define CLASS_2_89C28D3A79219BEA_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x14C5CAB0)
#define CLASS_2_89C28D3A79219BEA_METHOD_2_CB613A5EF970C11B_OFFSET UNITYSDK_OFFSET(0x14C5DB90)
#define CLASS_2_89C28D3A79219BEA_METHOD_2_DE25B04543C947C4_OFFSET UNITYSDK_OFFSET(0x14C5D5E0)
#define CLASS_2_89C28D3A79219BEA_METHOD_2_EEABD52C0F4D0C8A_OFFSET UNITYSDK_OFFSET(0x14C5D4C0)
#define CLASS_2_89C28D3A79219BEA_SET_INDEX_OFFSET UNITYSDK_OFFSET(0x14C5CA60)
#define CLASS_2_89C28D3A79219BEA__CTOR_OFFSET UNITYSDK_OFFSET(0x14C5E340)
#define CLASS_2_89C28D3A79219BEA__ONBIND_OFFSET UNITYSDK_OFFSET(0x14C5C950)
#define CLASS_2_89C28D3A79219BEA__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x14C5D5A0)
#define CLASS_2_89C28D3A79219BEA__ONTICK_OFFSET UNITYSDK_OFFSET(0x14C5D2B0)

inline static constexpr unsigned int Class_2_89C28D3A79219BEA_TypeDefinitionIndex = 72248;

class Class_2_89C28D3A79219BEA : public ::Class_1_34917908B7833130
{
public:
	// static const ::System::String* DJCBDJMACFH; // 0x0
	// static const ::System::Single HGBCBJKAAMM; // 0x0
	// static const ::System::Single HNMKCGJBIII; // 0x0
	::UnityEngine::UI::Text* KKNGAEAKKAM; // 0x60
	::UnityEngine::UI::Image* GFOKEABGEIO; // 0x68
	::Class_3_9AC44AECA5589F32* NFCHKIHENAE; // 0x70
	::RPG::Client::AnimatorButton* KJIOINOOIHP; // 0x78
	::UnityEngine::UI::Image* EDOPBFJNDBF; // 0x80
	::RPG::Client::UIStateCtrl* GIMAEGBDOBL; // 0x88
	::UnityEngine::UI::Image* BHMFMBBLADC; // 0x90
	::System::Single FAFIAGJFGEF; // 0x98
	::System::Int32 _Index_k__BackingField; // 0x9C
	::System::Boolean HAFCOEMEHNH; // 0xA0
	::System::Single BFKCADADNCA; // 0xA4
	::System::Single CLEBBBABPEI; // 0xA8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_89C28D3A79219BEA__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_89C28D3A79219BEA__ONBIND_OFFSET))(this);
	}

	::System::Int32 get_Index()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_89C28D3A79219BEA_GET_INDEX_OFFSET))(this);
	}

	::System::Void set_Index(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_89C28D3A79219BEA_SET_INDEX_OFFSET))(this, a1);
	}

	::UnityEngine::Transform* get_Trans()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_89C28D3A79219BEA_GET_TRANS_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_89C28D3A79219BEA_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_7646FFE662147970()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_89C28D3A79219BEA_METHOD_2_7646FFE662147970_OFFSET))(this);
	}

	::System::Void _OnTick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_89C28D3A79219BEA__ONTICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_EEABD52C0F4D0C8A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_89C28D3A79219BEA_METHOD_2_EEABD52C0F4D0C8A_OFFSET))(this);
	}

	::System::Void _OnDispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_89C28D3A79219BEA__ONDISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_DE25B04543C947C4(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_89C28D3A79219BEA_METHOD_2_DE25B04543C947C4_OFFSET))(this, a1);
	}

	::System::Void Method_2_3787E953EE385D05(::System::ValueTuple_2<::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*> a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::ValueTuple_2<::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*>))((::PBYTE)hIl2Cpp + CLASS_2_89C28D3A79219BEA_METHOD_2_3787E953EE385D05_OFFSET))(this, a1);
	}

	::System::Void Method_2_C6835D0742A4900A(::System::ValueTuple_2<::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint> a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::ValueTuple_2<::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint>))((::PBYTE)hIl2Cpp + CLASS_2_89C28D3A79219BEA_METHOD_2_C6835D0742A4900A_OFFSET))(this, a1);
	}

	::System::Void Method_2_CB613A5EF970C11B(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_89C28D3A79219BEA_METHOD_2_CB613A5EF970C11B_OFFSET))(this, a1);
	}

	::System::Void Method_2_39590AB2089F9F4D(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_89C28D3A79219BEA_METHOD_2_39590AB2089F9F4D_OFFSET))(this, a1);
	}

	::System::Void Method_2_9C25D81B36F50A81(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_89C28D3A79219BEA_METHOD_2_9C25D81B36F50A81_OFFSET))(this, a1);
	}

	::System::Void Method_2_870AF3CD1D0A67B1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_89C28D3A79219BEA_METHOD_2_870AF3CD1D0A67B1_OFFSET))(this);
	}

	::System::Void Method_2_06330CD58CB602B6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_89C28D3A79219BEA_METHOD_2_06330CD58CB602B6_OFFSET))(this);
	}

	::System::Void Method_2_39EF8484D354ADC7(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_89C28D3A79219BEA_METHOD_2_39EF8484D354ADC7_OFFSET))(this, a1);
	}

	::System::Void Method_2_B2FD964C82B25DEB(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_89C28D3A79219BEA_METHOD_2_B2FD964C82B25DEB_OFFSET))(this, a1);
	}

	::System::Void Method_2_368B5D43181B5CF0(::RPG::AvatarSystem::IAvatar* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + CLASS_2_89C28D3A79219BEA_METHOD_2_368B5D43181B5CF0_OFFSET))(this, a1);
	}

	::Class_3_9AC44AECA5589F32* Method_2_BAFE8DC12CA1CDF9()
	{
		return ((::Class_3_9AC44AECA5589F32*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_89C28D3A79219BEA_METHOD_2_BAFE8DC12CA1CDF9_OFFSET))(this);
	}

	::RPG::AvatarSystem::IAvatar* Method_2_9690E21CE863FF6C(::RPG::GameCore::GameEntity* a1)
	{
		return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_89C28D3A79219BEA_METHOD_2_9690E21CE863FF6C_OFFSET))(this, a1);
	}

	::System::Void Method_2_AD1EEF8F6B87D2FC(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_89C28D3A79219BEA_METHOD_2_AD1EEF8F6B87D2FC_OFFSET))(this, a1);
	}

	::System::Void Method_2_464F9487BF0D77F8(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_89C28D3A79219BEA_METHOD_2_464F9487BF0D77F8_OFFSET))(this, a1);
	}

	::System::Void Method_2_464F9487BF0D77F8_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_89C28D3A79219BEA_METHOD_2_464F9487BF0D77F8_1_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_89C28D3A79219BEA_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_89C28D3A79219BEA_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
