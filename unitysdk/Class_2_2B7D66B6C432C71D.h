#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"

class Class_2_157110479543DAE3;
class Class_2_5D383A48C6769A2A;
namespace RPG::Client { class GridFightTraitConfigBase; }
namespace RPG::Client { class GridFightTraitLayerConfig; }
namespace RPG::GameCore { class BattleGridFightTeamTraitData; }
namespace RPG::GameCore { class GridFightManager; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class Text; }

#define CLASS_2_2B7D66B6C432C71D_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x8A94320)
#define CLASS_2_2B7D66B6C432C71D_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x8A94460)
#define CLASS_2_2B7D66B6C432C71D_METHOD_2_0960CAEE01038065_OFFSET UNITYSDK_OFFSET(0x8A93210)
#define CLASS_2_2B7D66B6C432C71D_METHOD_2_36726F9E10ADB55F_OFFSET UNITYSDK_OFFSET(0x8A93AC0)
#define CLASS_2_2B7D66B6C432C71D_METHOD_2_3D813D05865A080E_OFFSET UNITYSDK_OFFSET(0x8A92FB0)
#define CLASS_2_2B7D66B6C432C71D_METHOD_2_6B6A6C287518AB71_OFFSET UNITYSDK_OFFSET(0x8A93A00)
#define CLASS_2_2B7D66B6C432C71D_METHOD_2_83DA3EC57FF907F4_OFFSET UNITYSDK_OFFSET(0x8A93590)
#define CLASS_2_2B7D66B6C432C71D_METHOD_2_8F8D080EF5D1D761_OFFSET UNITYSDK_OFFSET(0x8A92880)
#define CLASS_2_2B7D66B6C432C71D_METHOD_2_93190E731E31C79A_OFFSET UNITYSDK_OFFSET(0x8A92460)
#define CLASS_2_2B7D66B6C432C71D_METHOD_2_A27D06F9481FAFDB_1_OFFSET UNITYSDK_OFFSET(0x8A94260)
#define CLASS_2_2B7D66B6C432C71D_METHOD_2_A27D06F9481FAFDB_2_OFFSET UNITYSDK_OFFSET(0x8A942C0)
#define CLASS_2_2B7D66B6C432C71D_METHOD_2_A27D06F9481FAFDB_OFFSET UNITYSDK_OFFSET(0x8A94200)
#define CLASS_2_2B7D66B6C432C71D_METHOD_2_A27DC2C5A103933A_OFFSET UNITYSDK_OFFSET(0x8A929F0)
#define CLASS_2_2B7D66B6C432C71D_METHOD_2_BDAC3726B2B73008_OFFSET UNITYSDK_OFFSET(0x8A93080)
#define CLASS_2_2B7D66B6C432C71D_METHOD_2_C638E91FC0D3A13A_OFFSET UNITYSDK_OFFSET(0x8A94000)
#define CLASS_2_2B7D66B6C432C71D_METHOD_2_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x8A93F70)
#define CLASS_2_2B7D66B6C432C71D_METHOD_2_F7300E87EC49A206_1_OFFSET UNITYSDK_OFFSET(0x8A936A0)
#define CLASS_2_2B7D66B6C432C71D_METHOD_2_F7300E87EC49A206_2_OFFSET UNITYSDK_OFFSET(0x8A93850)
#define CLASS_2_2B7D66B6C432C71D_METHOD_2_F7300E87EC49A206_OFFSET UNITYSDK_OFFSET(0x8A933E0)
#define CLASS_2_2B7D66B6C432C71D__CTOR_OFFSET UNITYSDK_OFFSET(0x8A94580)
#define CLASS_2_2B7D66B6C432C71D__ONBIND_OFFSET UNITYSDK_OFFSET(0x8A920D0)
#define CLASS_2_2B7D66B6C432C71D___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x8A94770)
#define CLASS_2_2B7D66B6C432C71D___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x8A947D0)
#define CLASS_2_2B7D66B6C432C71D___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x8A94710)

inline static constexpr unsigned int Class_2_2B7D66B6C432C71D_TypeDefinitionIndex = 59193;

class Class_2_2B7D66B6C432C71D : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	::UnityEngine::Transform* Field_2_2; // 0x60
	::System::Collections::Generic::List_1<::Class_2_157110479543DAE3*>* Field_2_7; // 0x68
	::UnityEngine::Transform* Field_2_4; // 0x70
	::UnityEngine::UI::Text* Field_2_1; // 0x78
	::System::Collections::Generic::List_1<::Class_2_5D383A48C6769A2A*>* Field_2_6; // 0x80
	::UnityEngine::Transform* Field_2_3; // 0x88
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* Field_2_9; // 0x90
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::GridFightTraitConfigBase*>* Field_2_8; // 0x98
	::UnityEngine::Transform* Field_2_5; // 0xA0
	::UnityEngine::UI::Button* Field_2_0; // 0xA8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2B7D66B6C432C71D__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2B7D66B6C432C71D__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_93190E731E31C79A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2B7D66B6C432C71D_METHOD_2_93190E731E31C79A_OFFSET))(this);
	}

	::System::Int32 Method_2_3D813D05865A080E(::RPG::GameCore::BattleGridFightTeamTraitData* a1, ::RPG::GameCore::BattleGridFightTeamTraitData* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::BattleGridFightTeamTraitData*, ::RPG::GameCore::BattleGridFightTeamTraitData*))((::PBYTE)hIl2Cpp + CLASS_2_2B7D66B6C432C71D_METHOD_2_3D813D05865A080E_OFFSET))(this, a1, a2);
	}

	::RPG::Client::GridFightTraitLayerConfig* Method_2_BDAC3726B2B73008(::RPG::GameCore::BattleGridFightTeamTraitData* a1)
	{
		return ((::RPG::Client::GridFightTraitLayerConfig*(*)(::PVOID, ::RPG::GameCore::BattleGridFightTeamTraitData*))((::PBYTE)hIl2Cpp + CLASS_2_2B7D66B6C432C71D_METHOD_2_BDAC3726B2B73008_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27DC2C5A103933A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2B7D66B6C432C71D_METHOD_2_A27DC2C5A103933A_OFFSET))(this);
	}

	::System::Void Method_2_0960CAEE01038065()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2B7D66B6C432C71D_METHOD_2_0960CAEE01038065_OFFSET))(this);
	}

	::System::Void Method_2_F7300E87EC49A206()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2B7D66B6C432C71D_METHOD_2_F7300E87EC49A206_OFFSET))(this);
	}

	::System::Void Method_2_F7300E87EC49A206_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2B7D66B6C432C71D_METHOD_2_F7300E87EC49A206_1_OFFSET))(this);
	}

	::System::Void Method_2_F7300E87EC49A206_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2B7D66B6C432C71D_METHOD_2_F7300E87EC49A206_2_OFFSET))(this);
	}

	::System::Void Method_2_6B6A6C287518AB71(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_2B7D66B6C432C71D_METHOD_2_6B6A6C287518AB71_OFFSET))(this, a1);
	}

	::System::Void Method_2_36726F9E10ADB55F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2B7D66B6C432C71D_METHOD_2_36726F9E10ADB55F_OFFSET))(this);
	}

	::System::Void Method_2_C638E91FC0D3A13A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2B7D66B6C432C71D_METHOD_2_C638E91FC0D3A13A_OFFSET))(this);
	}

	::RPG::GameCore::GridFightManager* Method_2_8F8D080EF5D1D761()
	{
		return ((::RPG::GameCore::GridFightManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2B7D66B6C432C71D_METHOD_2_8F8D080EF5D1D761_OFFSET))(this);
	}

	::System::Boolean Method_2_CE34EA208837238D()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2B7D66B6C432C71D_METHOD_2_CE34EA208837238D_OFFSET))(this);
	}

	::System::Boolean Method_2_83DA3EC57FF907F4()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2B7D66B6C432C71D_METHOD_2_83DA3EC57FF907F4_OFFSET))(this);
	}

	::System::Void Method_2_A27D06F9481FAFDB(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_2B7D66B6C432C71D_METHOD_2_A27D06F9481FAFDB_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_2B7D66B6C432C71D_METHOD_2_A27D06F9481FAFDB_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_2B7D66B6C432C71D_METHOD_2_A27D06F9481FAFDB_2_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2B7D66B6C432C71D_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2B7D66B6C432C71D_AUTOREMOVECALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2B7D66B6C432C71D___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2B7D66B6C432C71D___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2B7D66B6C432C71D___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
