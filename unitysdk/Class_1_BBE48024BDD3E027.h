#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ScenenLightManager/LightInstanceID.h"
#include "unitysdk/System/Object.h"

class Class_1_BBE48024BDD3E027_Class_1_2A2756596B5B28CE;
class Class_1_BBE48024BDD3E027_Class_1_F76914C704498E50;
class Class_1_BBE48024BDD3E027_Class_3_AE31F159F362893C;
class Class_1_E3144EBBA3CB68CA;
class Class_1_E4CB20B056222958;
class Class_2_8B82B82888342DD7;
class Class_3_301DB96170A54A53;
namespace Collections::Pooled { template <typename T> class PooledList_1; }
namespace RPG::Client { class IAssetOperation; }
namespace RPG::Client { template <typename T1, typename T2> class LRUCache_2; }
namespace ScenenLightManager { class BaseSceneLightExportData; }
namespace ScenenLightManager { class BlockEnvExportData; }
namespace ScenenLightManager { class BlockEnvExportDataHeader; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace UnityEngine { class GameObject; }
template <typename T> class Class_1_2E4F8309DC17256A;

#define CLASS_1_BBE48024BDD3E027_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x18480300)
#define CLASS_1_BBE48024BDD3E027_METHOD_1_10D9716FC1267B59_OFFSET UNITYSDK_OFFSET(0x184830F0)
#define CLASS_1_BBE48024BDD3E027_METHOD_1_231A86DB4738C48B_1_OFFSET UNITYSDK_OFFSET(0x184802B0)
#define CLASS_1_BBE48024BDD3E027_METHOD_1_231A86DB4738C48B_OFFSET UNITYSDK_OFFSET(0x18480260)
#define CLASS_1_BBE48024BDD3E027_METHOD_1_336E64A79B43A60E_OFFSET UNITYSDK_OFFSET(0x18483F10)
#define CLASS_1_BBE48024BDD3E027_METHOD_1_38A38B74F6601D57_OFFSET UNITYSDK_OFFSET(0x18480340)
#define CLASS_1_BBE48024BDD3E027_METHOD_1_3B10EBB5408EF02E_OFFSET UNITYSDK_OFFSET(0x18483E00)
#define CLASS_1_BBE48024BDD3E027_METHOD_1_424B13B33E327014_OFFSET UNITYSDK_OFFSET(0x18480540)
#define CLASS_1_BBE48024BDD3E027_METHOD_1_4B6DEDB9FF4B740B_OFFSET UNITYSDK_OFFSET(0x18483DA0)
#define CLASS_1_BBE48024BDD3E027_METHOD_1_4BD2BFB48FF90060_OFFSET UNITYSDK_OFFSET(0x18484510)
#define CLASS_1_BBE48024BDD3E027_METHOD_1_5616F824C37699DE_OFFSET UNITYSDK_OFFSET(0x1847F6C0)
#define CLASS_1_BBE48024BDD3E027_METHOD_1_588DF62BE09F323B_OFFSET UNITYSDK_OFFSET(0x18484CD0)
#define CLASS_1_BBE48024BDD3E027_METHOD_1_5F0309C9330DB4D3_OFFSET UNITYSDK_OFFSET(0x18484C20)
#define CLASS_1_BBE48024BDD3E027_METHOD_1_6DFEF4918C679AF0_OFFSET UNITYSDK_OFFSET(0x184812B0)
#define CLASS_1_BBE48024BDD3E027_METHOD_1_7ADD5F1F5E247E3B_OFFSET UNITYSDK_OFFSET(0x184801F0)
#define CLASS_1_BBE48024BDD3E027_METHOD_1_8FF1A791BAD23EA6_OFFSET UNITYSDK_OFFSET(0x18484070)
#define CLASS_1_BBE48024BDD3E027_METHOD_1_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x18480200)
#define CLASS_1_BBE48024BDD3E027_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x18480020)
#define CLASS_1_BBE48024BDD3E027_METHOD_1_993E1D5A8E0E0952_OFFSET UNITYSDK_OFFSET(0x18484420)
#define CLASS_1_BBE48024BDD3E027_METHOD_1_9CDE7468468BDDF2_OFFSET UNITYSDK_OFFSET(0x18481C20)
#define CLASS_1_BBE48024BDD3E027_METHOD_1_9E9AD75FB825A8F6_OFFSET UNITYSDK_OFFSET(0x1847FED0)
#define CLASS_1_BBE48024BDD3E027_METHOD_1_ADDB59C50AF3252C_OFFSET UNITYSDK_OFFSET(0x184800F0)
#define CLASS_1_BBE48024BDD3E027_METHOD_1_B1978A17BDE3E154_OFFSET UNITYSDK_OFFSET(0x18481840)
#define CLASS_1_BBE48024BDD3E027_METHOD_1_BBA49FAB086F388D_OFFSET UNITYSDK_OFFSET(0x18483B70)
#define CLASS_1_BBE48024BDD3E027_METHOD_1_BBC28ACEA4B8B582_OFFSET UNITYSDK_OFFSET(0x18482A90)
#define CLASS_1_BBE48024BDD3E027_METHOD_1_BDAF397CF81D6065_OFFSET UNITYSDK_OFFSET(0x18482C40)
#define CLASS_1_BBE48024BDD3E027_METHOD_1_C5BCA8151FC14863_OFFSET UNITYSDK_OFFSET(0x18484F80)
#define CLASS_1_BBE48024BDD3E027_METHOD_1_C727ECF0BDD80048_OFFSET UNITYSDK_OFFSET(0x18480750)
#define CLASS_1_BBE48024BDD3E027_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x18480250)
#define CLASS_1_BBE48024BDD3E027_METHOD_1_CA1C8E94BEE0B3AC_OFFSET UNITYSDK_OFFSET(0x18481380)
#define CLASS_1_BBE48024BDD3E027_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x18483310)
#define CLASS_1_BBE48024BDD3E027_METHOD_1_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x18485370)
#define CLASS_1_BBE48024BDD3E027_METHOD_1_CA373AA1C7054598_3_OFFSET UNITYSDK_OFFSET(0x184853B0)
#define CLASS_1_BBE48024BDD3E027_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x184832D0)
#define CLASS_1_BBE48024BDD3E027_METHOD_1_DB84B525E4283E39_OFFSET UNITYSDK_OFFSET(0x18485320)
#define CLASS_1_BBE48024BDD3E027_METHOD_1_DD69C41B7B7208CB_OFFSET UNITYSDK_OFFSET(0x184819A0)
#define CLASS_1_BBE48024BDD3E027_METHOD_1_DDE5C3833280C5F2_OFFSET UNITYSDK_OFFSET(0x18481130)
#define CLASS_1_BBE48024BDD3E027_METHOD_1_E08C081AB098C340_OFFSET UNITYSDK_OFFSET(0x18482640)
#define CLASS_1_BBE48024BDD3E027_METHOD_1_E349BCB82D5369CB_OFFSET UNITYSDK_OFFSET(0x18485040)
#define CLASS_1_BBE48024BDD3E027_METHOD_1_ED7C575FDCC24095_OFFSET UNITYSDK_OFFSET(0x184853F0)
#define CLASS_1_BBE48024BDD3E027_METHOD_1_F2DA473A956C4174_OFFSET UNITYSDK_OFFSET(0x18483000)
#define CLASS_1_BBE48024BDD3E027_METHOD_1_FA3111EB9BCB7C2D_OFFSET UNITYSDK_OFFSET(0x18482DA0)
#define CLASS_1_BBE48024BDD3E027_METHOD_1_FB0C1E4D5746F2E7_OFFSET UNITYSDK_OFFSET(0x184831E0)
#define CLASS_1_BBE48024BDD3E027_METHOD_1_FDB5C259FC7B7E87_OFFSET UNITYSDK_OFFSET(0x18483360)
#define CLASS_1_BBE48024BDD3E027_METHOD_1_FFECB8E56FD1699E_OFFSET UNITYSDK_OFFSET(0x184810A0)
#define CLASS_1_BBE48024BDD3E027__CCTOR_OFFSET UNITYSDK_OFFSET(0x18485440)
#define CLASS_1_BBE48024BDD3E027__CTOR_OFFSET UNITYSDK_OFFSET(0x1847FB50)

inline static constexpr unsigned int Class_1_BBE48024BDD3E027_TypeDefinitionIndex = 49605;

class Class_1_BBE48024BDD3E027 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Queue_1<::System::Collections::Generic::Dictionary_2<::ScenenLightManager::LightInstanceID, ::System::Collections::Generic::List_1<::System::Int32>*>*>** StaticGet_LBMEAOEKFDH()
	{
		return (::System::Collections::Generic::Queue_1<::System::Collections::Generic::Dictionary_2<::ScenenLightManager::LightInstanceID, ::System::Collections::Generic::List_1<::System::Int32>*>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_BBE48024BDD3E027_TypeDefinitionIndex)->GetStaticField(0x66940);
	}
	::RPG::Client::LRUCache_2<::System::Int32, ::Class_1_BBE48024BDD3E027_Class_1_2A2756596B5B28CE*>* BFKHEMCIGHG; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* ADCNHCKNLDF; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>* BDIJOKHLNLO; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_E4CB20B056222958*>* AJMBJKAJEFB; // 0x28
	::Class_1_E3144EBBA3CB68CA* JKJJEINDFMA; // 0x30
	::System::String* PEFALGOFDIK; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_BBE48024BDD3E027_Class_1_F76914C704498E50*>* LNMDNFKKMDI; // 0x40
	::System::Collections::Generic::Dictionary_2<::ScenenLightManager::LightInstanceID, ::System::Collections::Generic::List_1<::System::Int32>*>* CDJLDNNMING; // 0x48
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_BBE48024BDD3E027_Class_1_2A2756596B5B28CE*>* LAFNFCPPNJB; // 0x50
	::Class_2_8B82B82888342DD7* NIJEOJCIINK; // 0x58
	::Class_3_301DB96170A54A53* HPAKKMNLCND; // 0x60
	::System::Int64 FCPEAJGLGNF; // 0x68

	::System::Void _ctor(::Class_1_E3144EBBA3CB68CA* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E3144EBBA3CB68CA*))((::PBYTE)hIl2Cpp + CLASS_1_BBE48024BDD3E027__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_BBE48024BDD3E027__CCTOR_OFFSET))();
	}

	::System::Double Method_1_5616F824C37699DE()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BBE48024BDD3E027_METHOD_1_5616F824C37699DE_OFFSET))(this);
	}

	static ::System::Void Method_1_ADDB59C50AF3252C(::Class_1_BBE48024BDD3E027_Class_1_2A2756596B5B28CE* a1)
	{
		return ((::System::Void(*)(::Class_1_BBE48024BDD3E027_Class_1_2A2756596B5B28CE*))((::PBYTE)hIl2Cpp + CLASS_1_BBE48024BDD3E027_METHOD_1_ADDB59C50AF3252C_OFFSET))(a1);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BBE48024BDD3E027_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Int64 Method_1_7ADD5F1F5E247E3B()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BBE48024BDD3E027_METHOD_1_7ADD5F1F5E247E3B_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::ScenenLightManager::LightInstanceID, ::System::Collections::Generic::List_1<::System::Int32>*>* Method_1_9E9AD75FB825A8F6()
	{
		return ((::System::Collections::Generic::Dictionary_2<::ScenenLightManager::LightInstanceID, ::System::Collections::Generic::List_1<::System::Int32>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BBE48024BDD3E027_METHOD_1_9E9AD75FB825A8F6_OFFSET))(this);
	}

	::System::Int32 Method_1_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BBE48024BDD3E027_METHOD_1_95780ED94B90ED36_OFFSET))(this);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BBE48024BDD3E027_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}

	static ::System::Void Method_1_231A86DB4738C48B(::Class_1_E4CB20B056222958* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::Class_1_E4CB20B056222958*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_BBE48024BDD3E027_METHOD_1_231A86DB4738C48B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_231A86DB4738C48B_1(::Class_1_E4CB20B056222958* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::Class_1_E4CB20B056222958*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_BBE48024BDD3E027_METHOD_1_231A86DB4738C48B_1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_E4CB20B056222958* a1)
	{
		return ((::System::Void(*)(::Class_1_E4CB20B056222958*))((::PBYTE)hIl2Cpp + CLASS_1_BBE48024BDD3E027_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	::System::Void Method_1_38A38B74F6601D57(::System::Int32 a1, ::RPG::Client::IAssetOperation* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::Client::IAssetOperation*))((::PBYTE)hIl2Cpp + CLASS_1_BBE48024BDD3E027_METHOD_1_38A38B74F6601D57_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_424B13B33E327014(::System::Int32 a1, ::Class_1_BBE48024BDD3E027_Class_3_AE31F159F362893C* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Class_1_BBE48024BDD3E027_Class_3_AE31F159F362893C*))((::PBYTE)hIl2Cpp + CLASS_1_BBE48024BDD3E027_METHOD_1_424B13B33E327014_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_C727ECF0BDD80048(::System::Int32 a1, ::System::Int32 a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_BBE48024BDD3E027_METHOD_1_C727ECF0BDD80048_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_FFECB8E56FD1699E(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_BBE48024BDD3E027_METHOD_1_FFECB8E56FD1699E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_DDE5C3833280C5F2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BBE48024BDD3E027_METHOD_1_DDE5C3833280C5F2_OFFSET))(this);
	}

	::System::Void Method_1_6DFEF4918C679AF0(::Class_1_E4CB20B056222958* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E4CB20B056222958*))((::PBYTE)hIl2Cpp + CLASS_1_BBE48024BDD3E027_METHOD_1_6DFEF4918C679AF0_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA1C8E94BEE0B3AC(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_BBE48024BDD3E027_METHOD_1_CA1C8E94BEE0B3AC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_B1978A17BDE3E154(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_BBE48024BDD3E027_METHOD_1_B1978A17BDE3E154_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_DD69C41B7B7208CB(::ScenenLightManager::BlockEnvExportData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::ScenenLightManager::BlockEnvExportData*))((::PBYTE)hIl2Cpp + CLASS_1_BBE48024BDD3E027_METHOD_1_DD69C41B7B7208CB_OFFSET))(this, a1);
	}

	::System::Void Method_1_9CDE7468468BDDF2(::System::Int32 a1, ::System::Int32 a2, ::Class_1_BBE48024BDD3E027_Class_3_AE31F159F362893C* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::Class_1_BBE48024BDD3E027_Class_3_AE31F159F362893C*))((::PBYTE)hIl2Cpp + CLASS_1_BBE48024BDD3E027_METHOD_1_9CDE7468468BDDF2_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_E08C081AB098C340(::System::Int32 a1, ::System::Int32 a2, ::Class_1_BBE48024BDD3E027_Class_3_AE31F159F362893C* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::Class_1_BBE48024BDD3E027_Class_3_AE31F159F362893C*))((::PBYTE)hIl2Cpp + CLASS_1_BBE48024BDD3E027_METHOD_1_E08C081AB098C340_OFFSET))(this, a1, a2, a3);
	}

	::ScenenLightManager::BaseSceneLightExportData* Method_1_BBC28ACEA4B8B582(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::ScenenLightManager::BaseSceneLightExportData*(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_BBE48024BDD3E027_METHOD_1_BBC28ACEA4B8B582_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_BDAF397CF81D6065(::System::Int32 a1, ::System::Int32 a2, ::Class_1_BBE48024BDD3E027_Class_3_AE31F159F362893C* a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::Class_1_BBE48024BDD3E027_Class_3_AE31F159F362893C*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_BBE48024BDD3E027_METHOD_1_BDAF397CF81D6065_OFFSET))(this, a1, a2, a3, a4);
	}

	::ScenenLightManager::LightInstanceID Method_1_FA3111EB9BCB7C2D(::System::Int32 a1)
	{
		return ((::ScenenLightManager::LightInstanceID(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_BBE48024BDD3E027_METHOD_1_FA3111EB9BCB7C2D_OFFSET))(this, a1);
	}

	::Collections::Pooled::PooledList_1<::System::Int32>* Method_1_F2DA473A956C4174(::ScenenLightManager::LightInstanceID a1)
	{
		return ((::Collections::Pooled::PooledList_1<::System::Int32>*(*)(::PVOID, ::ScenenLightManager::LightInstanceID))((::PBYTE)hIl2Cpp + CLASS_1_BBE48024BDD3E027_METHOD_1_F2DA473A956C4174_OFFSET))(this, a1);
	}

	::System::Void Method_1_10D9716FC1267B59(::System::Int64 a1, ::Collections::Pooled::PooledList_1<::System::Int32>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64, ::Collections::Pooled::PooledList_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_BBE48024BDD3E027_METHOD_1_10D9716FC1267B59_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_FB0C1E4D5746F2E7(::ScenenLightManager::LightInstanceID a1, ::Collections::Pooled::PooledList_1<::System::Int32>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::ScenenLightManager::LightInstanceID, ::Collections::Pooled::PooledList_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_BBE48024BDD3E027_METHOD_1_FB0C1E4D5746F2E7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BBE48024BDD3E027_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BBE48024BDD3E027_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::ScenenLightManager::BlockEnvExportDataHeader* Method_1_FDB5C259FC7B7E87(::System::String* a1)
	{
		return ((::ScenenLightManager::BlockEnvExportDataHeader*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_BBE48024BDD3E027_METHOD_1_FDB5C259FC7B7E87_OFFSET))(this, a1);
	}

	::System::Void Method_1_BBA49FAB086F388D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BBE48024BDD3E027_METHOD_1_BBA49FAB086F388D_OFFSET))(this);
	}

	::System::Boolean Method_1_4B6DEDB9FF4B740B(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_BBE48024BDD3E027_METHOD_1_4B6DEDB9FF4B740B_OFFSET))(this, a1);
	}

	::System::Void Method_1_3B10EBB5408EF02E(::Class_1_E4CB20B056222958* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E4CB20B056222958*))((::PBYTE)hIl2Cpp + CLASS_1_BBE48024BDD3E027_METHOD_1_3B10EBB5408EF02E_OFFSET))(this, a1);
	}

	::System::Void Method_1_336E64A79B43A60E(::Class_1_E4CB20B056222958* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E4CB20B056222958*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_BBE48024BDD3E027_METHOD_1_336E64A79B43A60E_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_1_8FF1A791BAD23EA6(::Class_1_2E4F8309DC17256A<::System::Int32>* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_2E4F8309DC17256A<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_BBE48024BDD3E027_METHOD_1_8FF1A791BAD23EA6_OFFSET))(this, a1);
	}

	::Class_1_E4CB20B056222958* Method_1_993E1D5A8E0E0952(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::Class_1_E4CB20B056222958*(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_BBE48024BDD3E027_METHOD_1_993E1D5A8E0E0952_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_4BD2BFB48FF90060(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_BBE48024BDD3E027_METHOD_1_4BD2BFB48FF90060_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_1_E4CB20B056222958*>* Method_1_5F0309C9330DB4D3(::UnityEngine::GameObject* a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_E4CB20B056222958*>*(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_BBE48024BDD3E027_METHOD_1_5F0309C9330DB4D3_OFFSET))(this, a1);
	}

	::System::Void Method_1_C5BCA8151FC14863(::System::String* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_BBE48024BDD3E027_METHOD_1_C5BCA8151FC14863_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Class_1_E4CB20B056222958*>* Method_1_E349BCB82D5369CB(::System::String* a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_E4CB20B056222958*>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_BBE48024BDD3E027_METHOD_1_E349BCB82D5369CB_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_1_E4CB20B056222958*>* Method_1_588DF62BE09F323B(::System::String* a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_E4CB20B056222958*>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_BBE48024BDD3E027_METHOD_1_588DF62BE09F323B_OFFSET))(this, a1);
	}

	::System::Void Method_1_DB84B525E4283E39(::System::Int32 a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_BBE48024BDD3E027_METHOD_1_DB84B525E4283E39_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BBE48024BDD3E027_METHOD_1_CA373AA1C7054598_2_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BBE48024BDD3E027_METHOD_1_CA373AA1C7054598_3_OFFSET))(this);
	}

	::System::Single Method_1_ED7C575FDCC24095(::RPG::Client::IAssetOperation* a1)
	{
		return ((::System::Single(*)(::PVOID, ::RPG::Client::IAssetOperation*))((::PBYTE)hIl2Cpp + CLASS_1_BBE48024BDD3E027_METHOD_1_ED7C575FDCC24095_OFFSET))(this, a1);
	}
};
