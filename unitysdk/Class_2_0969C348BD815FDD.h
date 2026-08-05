#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B4BE03363BD6F2CF.h"
#include "unitysdk/Foundation/ViewObject/Subsystem/GroupSuiteChangeData.h"
#include "unitysdk/MoleMole/Config/TimePeriodType.h"
#include "unitysdk/MoleMole/Config/WeatherType.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_3002D7CF5FEE9D3A;
class Class_1_3221F717AA0FB040;
class Class_1_3B91E8B5FF29338A;
class Class_1_C9DFE5EE7107C629_1;
class Class_2_0969C348BD815FDD_Class_1_4EDF2E62A2BF85A9;
class Class_3_C93CC3D2C2AC4067;
namespace MoleMole { class SceneSoundData; }
namespace MoleMole { class SceneSoundEmitterSpaceShapeParam; }
namespace MoleMole { class SceneSoundPolygonData; }
namespace MoleMole { class SceneSoundPortalData; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System { template <typename T> class Comparison_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_2_0969C348BD815FDD_GET_SOUNDACTIONSOURCEHINT_OFFSET UNITYSDK_OFFSET(0x13E49880)
#define CLASS_2_0969C348BD815FDD_GET_SOUNDGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x13E49870)
#define CLASS_2_0969C348BD815FDD_METHOD_2_01BA9D6EB27DD717_OFFSET UNITYSDK_OFFSET(0x13E59370)
#define CLASS_2_0969C348BD815FDD_METHOD_2_050E70FEDB783306_OFFSET UNITYSDK_OFFSET(0x13E53530)
#define CLASS_2_0969C348BD815FDD_METHOD_2_0D8F9E7F3703509F_OFFSET UNITYSDK_OFFSET(0x13E50210)
#define CLASS_2_0969C348BD815FDD_METHOD_2_11A5396029C33A57_OFFSET UNITYSDK_OFFSET(0x13E4F3C0)
#define CLASS_2_0969C348BD815FDD_METHOD_2_14AFBA2E8A242644_OFFSET UNITYSDK_OFFSET(0x13E4D930)
#define CLASS_2_0969C348BD815FDD_METHOD_2_1B609003A2DB539A_OFFSET UNITYSDK_OFFSET(0x13E52D10)
#define CLASS_2_0969C348BD815FDD_METHOD_2_1CBBDF2842FD19D4_OFFSET UNITYSDK_OFFSET(0x13E4B850)
#define CLASS_2_0969C348BD815FDD_METHOD_2_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x13E55190)
#define CLASS_2_0969C348BD815FDD_METHOD_2_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x13E59440)
#define CLASS_2_0969C348BD815FDD_METHOD_2_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x13E535C0)
#define CLASS_2_0969C348BD815FDD_METHOD_2_273A34F921CC0A5A_OFFSET UNITYSDK_OFFSET(0x13E4B7B0)
#define CLASS_2_0969C348BD815FDD_METHOD_2_27AAEDA142300EE9_OFFSET UNITYSDK_OFFSET(0x13E59640)
#define CLASS_2_0969C348BD815FDD_METHOD_2_29F1AB4F8BF143C2_OFFSET UNITYSDK_OFFSET(0x13E53B70)
#define CLASS_2_0969C348BD815FDD_METHOD_2_2F8A7C44565BF53E_OFFSET UNITYSDK_OFFSET(0x13E54B90)
#define CLASS_2_0969C348BD815FDD_METHOD_2_34990AE7F0786741_1_OFFSET UNITYSDK_OFFSET(0x13E52290)
#define CLASS_2_0969C348BD815FDD_METHOD_2_34990AE7F0786741_OFFSET UNITYSDK_OFFSET(0x13E50D50)
#define CLASS_2_0969C348BD815FDD_METHOD_2_35537D55D369FC1D_OFFSET UNITYSDK_OFFSET(0x13E4DEA0)
#define CLASS_2_0969C348BD815FDD_METHOD_2_367B9590522079D1_1_OFFSET UNITYSDK_OFFSET(0x13E4A800)
#define CLASS_2_0969C348BD815FDD_METHOD_2_367B9590522079D1_OFFSET UNITYSDK_OFFSET(0x13E4A480)
#define CLASS_2_0969C348BD815FDD_METHOD_2_37DF4F842D04B26D_OFFSET UNITYSDK_OFFSET(0x13E54DD0)
#define CLASS_2_0969C348BD815FDD_METHOD_2_3BCF0226A6CDC13B_OFFSET UNITYSDK_OFFSET(0x13E551F0)
#define CLASS_2_0969C348BD815FDD_METHOD_2_3E078E670629E10F_OFFSET UNITYSDK_OFFSET(0x13E528B0)
#define CLASS_2_0969C348BD815FDD_METHOD_2_430A8A499F660301_OFFSET UNITYSDK_OFFSET(0x13E53290)
#define CLASS_2_0969C348BD815FDD_METHOD_2_4846DF9AB76EF245_OFFSET UNITYSDK_OFFSET(0x13E52C80)
#define CLASS_2_0969C348BD815FDD_METHOD_2_4D12A6D748A5EF95_OFFSET UNITYSDK_OFFSET(0x13E513E0)
#define CLASS_2_0969C348BD815FDD_METHOD_2_5FAD56E9E208220A_OFFSET UNITYSDK_OFFSET(0x13E59180)
#define CLASS_2_0969C348BD815FDD_METHOD_2_6E6682ED9FD6F719_OFFSET UNITYSDK_OFFSET(0x13E4D5A0)
#define CLASS_2_0969C348BD815FDD_METHOD_2_704FAC4600717444_OFFSET UNITYSDK_OFFSET(0x13E54230)
#define CLASS_2_0969C348BD815FDD_METHOD_2_724025AF880C2293_OFFSET UNITYSDK_OFFSET(0x13E4C250)
#define CLASS_2_0969C348BD815FDD_METHOD_2_7E1BADD1D133FA1C_OFFSET UNITYSDK_OFFSET(0x13E4CCB0)
#define CLASS_2_0969C348BD815FDD_METHOD_2_7EAA8879197594BA_OFFSET UNITYSDK_OFFSET(0x13E55A00)
#define CLASS_2_0969C348BD815FDD_METHOD_2_8053180E4EAA604D_OFFSET UNITYSDK_OFFSET(0x13E51270)
#define CLASS_2_0969C348BD815FDD_METHOD_2_80BBB1FFBF365A2A_OFFSET UNITYSDK_OFFSET(0x13E54FC0)
#define CLASS_2_0969C348BD815FDD_METHOD_2_838567CF72365834_OFFSET UNITYSDK_OFFSET(0x13E59430)
#define CLASS_2_0969C348BD815FDD_METHOD_2_88498C7D3D24BED7_OFFSET UNITYSDK_OFFSET(0x13E59500)
#define CLASS_2_0969C348BD815FDD_METHOD_2_8E51129BB7AF6021_OFFSET UNITYSDK_OFFSET(0x13E52F10)
#define CLASS_2_0969C348BD815FDD_METHOD_2_9198A89E36357F79_OFFSET UNITYSDK_OFFSET(0x13E4E410)
#define CLASS_2_0969C348BD815FDD_METHOD_2_967C63E6F042BD8A_OFFSET UNITYSDK_OFFSET(0x13E563D0)
#define CLASS_2_0969C348BD815FDD_METHOD_2_9699F0993A0206A3_OFFSET UNITYSDK_OFFSET(0x13E53660)
#define CLASS_2_0969C348BD815FDD_METHOD_2_9A4DCB2B4ADEB8A9_OFFSET UNITYSDK_OFFSET(0x13E4B270)
#define CLASS_2_0969C348BD815FDD_METHOD_2_9D0688AE2E08E349_OFFSET UNITYSDK_OFFSET(0x13E4C030)
#define CLASS_2_0969C348BD815FDD_METHOD_2_A0C79E167EE154F7_OFFSET UNITYSDK_OFFSET(0x13E57770)
#define CLASS_2_0969C348BD815FDD_METHOD_2_A66212928FD358E2_OFFSET UNITYSDK_OFFSET(0x13E4F760)
#define CLASS_2_0969C348BD815FDD_METHOD_2_A85E3080F6F02136_OFFSET UNITYSDK_OFFSET(0x13E56010)
#define CLASS_2_0969C348BD815FDD_METHOD_2_AD4DBD7C36DD8F3C_OFFSET UNITYSDK_OFFSET(0x13E586A0)
#define CLASS_2_0969C348BD815FDD_METHOD_2_BC3B33805876BEAE_OFFSET UNITYSDK_OFFSET(0x13E52730)
#define CLASS_2_0969C348BD815FDD_METHOD_2_C2AD9F9EDA773068_1_OFFSET UNITYSDK_OFFSET(0x13E594B0)
#define CLASS_2_0969C348BD815FDD_METHOD_2_C2AD9F9EDA773068_OFFSET UNITYSDK_OFFSET(0x13E534F0)
#define CLASS_2_0969C348BD815FDD_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x13E541A0)
#define CLASS_2_0969C348BD815FDD_METHOD_2_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x13E58610)
#define CLASS_2_0969C348BD815FDD_METHOD_2_CA373AA1C7054598_3_OFFSET UNITYSDK_OFFSET(0x13E595B0)
#define CLASS_2_0969C348BD815FDD_METHOD_2_CA373AA1C7054598_4_OFFSET UNITYSDK_OFFSET(0x13E59A30)
#define CLASS_2_0969C348BD815FDD_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x13E54110)
#define CLASS_2_0969C348BD815FDD_METHOD_2_CB74603E77CF9AD9_OFFSET UNITYSDK_OFFSET(0x13E4E7A0)
#define CLASS_2_0969C348BD815FDD_METHOD_2_D081995AED5DD195_OFFSET UNITYSDK_OFFSET(0x13E59450)
#define CLASS_2_0969C348BD815FDD_METHOD_2_D1F5A654A67BB61C_OFFSET UNITYSDK_OFFSET(0x13E4F000)
#define CLASS_2_0969C348BD815FDD_METHOD_2_D739CDB64C537A2B_OFFSET UNITYSDK_OFFSET(0x13E58190)
#define CLASS_2_0969C348BD815FDD_METHOD_2_DF3C54A5ADEABAF1_OFFSET UNITYSDK_OFFSET(0x13E4AC30)
#define CLASS_2_0969C348BD815FDD_METHOD_2_E1CC79B726CFA12A_OFFSET UNITYSDK_OFFSET(0x13E511E0)
#define CLASS_2_0969C348BD815FDD_METHOD_2_E5620F386550DA2F_OFFSET UNITYSDK_OFFSET(0x13E4FAF0)
#define CLASS_2_0969C348BD815FDD_METHOD_2_E69AA2E64A20143D_OFFSET UNITYSDK_OFFSET(0x13E577D0)
#define CLASS_2_0969C348BD815FDD_METHOD_2_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0x13E592E0)
#define CLASS_2_0969C348BD815FDD_METHOD_2_F15F1A9019D1E348_OFFSET UNITYSDK_OFFSET(0x13E50370)
#define CLASS_2_0969C348BD815FDD_METHOD_2_F206290BA342BA13_OFFSET UNITYSDK_OFFSET(0x13E4D690)
#define CLASS_2_0969C348BD815FDD_ONGROUPSUITECHANGED_OFFSET UNITYSDK_OFFSET(0x13E4FF00)
#define CLASS_2_0969C348BD815FDD__CCTOR_OFFSET UNITYSDK_OFFSET(0x13E50160)
#define CLASS_2_0969C348BD815FDD__CTOR_OFFSET UNITYSDK_OFFSET(0x13E498C0)

inline static constexpr unsigned int Class_2_0969C348BD815FDD_TypeDefinitionIndex = 54999;

class Class_2_0969C348BD815FDD : public ::Class_1_B4BE03363BD6F2CF
{
public:
	static ::System::Comparison_1<::System::ValueTuple_2<::System::Single, ::MoleMole::SceneSoundPolygonData*>>** StaticGet_Field_2_31()
	{
		return (::System::Comparison_1<::System::ValueTuple_2<::System::Single, ::MoleMole::SceneSoundPolygonData*>>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_0969C348BD815FDD_TypeDefinitionIndex)->GetStaticField(0x3F060);
	}
	static ::System::UInt64* StaticGet_Field_2_22()
	{
		return (::System::UInt64*)Il2CppClass::FromTypeDefinitionIndex(Class_2_0969C348BD815FDD_TypeDefinitionIndex)->GetStaticField(0xEA40);
	}
	// static const ::System::Int32 Field_2_20 = 0x5; // 0x0
	::System::Collections::Generic::HashSet_1<::System::String*>* Field_2_37; // 0x18
	::MoleMole::SceneSoundPolygonData* Field_2_16; // 0x20
	::MoleMole::SceneSoundData* Field_2_11; // 0x28
	::System::Collections::Generic::HashSet_1<::System::String*>* Field_2_8; // 0x30
	::System::Collections::Generic::HashSet_1<::System::String*>* Field_2_36; // 0x38
	::System::Collections::Generic::List_1<::MoleMole::SceneSoundPolygonData*>* Field_2_18; // 0x40
	::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Int32, ::MoleMole::SceneSoundPortalData*>>*>* Field_2_25; // 0x48
	::UnityEngine::GameObject* Field_2_10; // 0x50
	::System::Collections::Generic::List_1<::MoleMole::SceneSoundPolygonData*>* Field_2_27; // 0x58
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_2_0969C348BD815FDD_Class_1_4EDF2E62A2BF85A9*>* Field_2_14; // 0x60
	::System::String* Field_2_23; // 0x68
	::System::Collections::Generic::List_1<::MoleMole::SceneSoundPolygonData*>* Field_2_19; // 0x70
	::System::Collections::Generic::HashSet_1<::System::String*>* Field_2_46; // 0x78
	::System::Collections::Generic::HashSet_1<::System::String*>* Field_2_39; // 0x80
	::System::String* Field_2_33; // 0x88
	::System::Collections::Generic::HashSet_1<::System::String*>* Field_2_47; // 0x90
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_2_32; // 0x98
	::System::Collections::Generic::HashSet_1<::System::String*>* Field_2_43; // 0xA0
	::System::Collections::Generic::List_1<::MoleMole::SceneSoundPolygonData*>* Field_2_21; // 0xA8
	::System::Collections::Generic::HashSet_1<::System::String*>* Field_2_9; // 0xB0
	::System::Collections::Generic::HashSet_1<::System::String*>* Field_2_38; // 0xB8
	::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::SceneSoundPolygonData*>* Field_2_17; // 0xC0
	::System::Collections::Generic::List_1<::System::String*>* Field_2_7; // 0xC8
	::System::Collections::Generic::List_1<::System::String*>* Field_2_5; // 0xD0
	::Class_1_3221F717AA0FB040* Field_2_24; // 0xD8
	::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Single, ::MoleMole::SceneSoundPolygonData*>>* Field_2_26; // 0xE0
	::System::Collections::Generic::List_1<::System::String*>* Field_2_6; // 0xE8
	::System::Collections::Generic::List_1<::System::String*>* Field_2_4; // 0xF0
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>* Field_2_12; // 0xF8
	::System::Collections::Generic::HashSet_1<::System::String*>* Field_2_42; // 0x100
	::System::UInt32 Field_2_13; // 0x108
	::System::Single Field_2_51; // 0x10C
	::System::Int32 Field_2_29; // 0x110
	::System::Int32 Field_2_30; // 0x114
	::System::Int32 Field_2_15; // 0x118
	::System::Boolean Field_2_45; // 0x11C
	::System::Boolean Field_2_44; // 0x11D
	::System::Boolean Field_2_35; // 0x11E
	::System::Boolean Field_2_49; // 0x11F
	::System::Int32 Field_2_0; // 0x120
	::System::Int32 Field_2_41; // 0x124
	::MoleMole::Config::TimePeriodType Field_2_50; // 0x128
	::System::UInt32 Field_2_34; // 0x12C
	::System::Int32 Field_2_28; // 0x130
	::System::Int32 Field_2_40; // 0x134

	::System::Void _ctor(::Class_1_C9DFE5EE7107C629_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C9DFE5EE7107C629_1*))((::PBYTE)hIl2Cpp + CLASS_2_0969C348BD815FDD__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_0969C348BD815FDD__CCTOR_OFFSET))();
	}

	::UnityEngine::GameObject* get_soundGameObject()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0969C348BD815FDD_GET_SOUNDGAMEOBJECT_OFFSET))(this);
	}

	::System::String* get_soundActionSourceHint()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0969C348BD815FDD_GET_SOUNDACTIONSOURCEHINT_OFFSET))(this);
	}

	::System::Void Method_2_367B9590522079D1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0969C348BD815FDD_METHOD_2_367B9590522079D1_OFFSET))(this);
	}

	::System::Void Method_2_367B9590522079D1_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0969C348BD815FDD_METHOD_2_367B9590522079D1_1_OFFSET))(this);
	}

	::System::Void Method_2_DF3C54A5ADEABAF1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0969C348BD815FDD_METHOD_2_DF3C54A5ADEABAF1_OFFSET))(this);
	}

	::System::Void Method_2_1CBBDF2842FD19D4(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_0969C348BD815FDD_METHOD_2_1CBBDF2842FD19D4_OFFSET))(this, a1);
	}

	::System::Void Method_2_7E1BADD1D133FA1C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0969C348BD815FDD_METHOD_2_7E1BADD1D133FA1C_OFFSET))(this);
	}

	::System::Void Method_2_35537D55D369FC1D(::Class_1_3002D7CF5FEE9D3A* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3002D7CF5FEE9D3A*))((::PBYTE)hIl2Cpp + CLASS_2_0969C348BD815FDD_METHOD_2_35537D55D369FC1D_OFFSET))(this, a1);
	}

	::System::Void Method_2_9198A89E36357F79()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0969C348BD815FDD_METHOD_2_9198A89E36357F79_OFFSET))(this);
	}

	::System::Void Method_2_CB74603E77CF9AD9(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_0969C348BD815FDD_METHOD_2_CB74603E77CF9AD9_OFFSET))(this, a1);
	}

	::System::Void OnGroupSuiteChanged(::Foundation::ViewObject::Subsystem::GroupSuiteChangeData a1)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::Subsystem::GroupSuiteChangeData))((::PBYTE)hIl2Cpp + CLASS_2_0969C348BD815FDD_ONGROUPSUITECHANGED_OFFSET))(this, a1);
	}

	::System::Void Method_2_0D8F9E7F3703509F(::MoleMole::Config::WeatherType a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::WeatherType))((::PBYTE)hIl2Cpp + CLASS_2_0969C348BD815FDD_METHOD_2_0D8F9E7F3703509F_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_2_F15F1A9019D1E348(::UnityEngine::Vector3 a1, ::UnityEngine::Transform* a2, ::MoleMole::SceneSoundEmitterSpaceShapeParam* a3)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Transform*, ::MoleMole::SceneSoundEmitterSpaceShapeParam*))((::PBYTE)hIl2Cpp + CLASS_2_0969C348BD815FDD_METHOD_2_F15F1A9019D1E348_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_34990AE7F0786741(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_0969C348BD815FDD_METHOD_2_34990AE7F0786741_OFFSET))(this, a1);
	}

	::System::Void Method_2_724025AF880C2293()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0969C348BD815FDD_METHOD_2_724025AF880C2293_OFFSET))(this);
	}

	::System::Void Method_2_E1CC79B726CFA12A(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_0969C348BD815FDD_METHOD_2_E1CC79B726CFA12A_OFFSET))(this, a1);
	}

	::System::Void Method_2_6E6682ED9FD6F719()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0969C348BD815FDD_METHOD_2_6E6682ED9FD6F719_OFFSET))(this);
	}

	::System::Void Method_2_8053180E4EAA604D(::System::Collections::Generic::List_1<::System::String*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_2_0969C348BD815FDD_METHOD_2_8053180E4EAA604D_OFFSET))(this, a1);
	}

	::System::Void Method_2_34990AE7F0786741_1(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_0969C348BD815FDD_METHOD_2_34990AE7F0786741_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_BC3B33805876BEAE(::System::Int32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_0969C348BD815FDD_METHOD_2_BC3B33805876BEAE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_3E078E670629E10F(::UnityEngine::GameObject* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_0969C348BD815FDD_METHOD_2_3E078E670629E10F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_4846DF9AB76EF245(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_0969C348BD815FDD_METHOD_2_4846DF9AB76EF245_OFFSET))(this, a1);
	}

	::System::Single Method_2_1B609003A2DB539A()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0969C348BD815FDD_METHOD_2_1B609003A2DB539A_OFFSET))(this);
	}

	::System::Void Method_2_D1F5A654A67BB61C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0969C348BD815FDD_METHOD_2_D1F5A654A67BB61C_OFFSET))(this);
	}

	::System::Void Method_2_8E51129BB7AF6021(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_0969C348BD815FDD_METHOD_2_8E51129BB7AF6021_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_A66212928FD358E2(::MoleMole::SceneSoundPolygonData* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::SceneSoundPolygonData*))((::PBYTE)hIl2Cpp + CLASS_2_0969C348BD815FDD_METHOD_2_A66212928FD358E2_OFFSET))(this, a1);
	}

	::System::Void Method_2_F206290BA342BA13()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0969C348BD815FDD_METHOD_2_F206290BA342BA13_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::MoleMole::SceneSoundPolygonData*>* Method_2_C2AD9F9EDA773068()
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::SceneSoundPolygonData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0969C348BD815FDD_METHOD_2_C2AD9F9EDA773068_OFFSET))(this);
	}

	::System::Void Method_2_050E70FEDB783306(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_0969C348BD815FDD_METHOD_2_050E70FEDB783306_OFFSET))(this, a1);
	}

	::System::Void Method_2_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_0969C348BD815FDD_METHOD_2_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Void Method_2_11A5396029C33A57()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0969C348BD815FDD_METHOD_2_11A5396029C33A57_OFFSET))(this);
	}

	::System::Single Method_2_29F1AB4F8BF143C2(::MoleMole::SceneSoundPolygonData* a1, ::MoleMole::SceneSoundPolygonData* a2, ::System::Collections::Generic::List_1<::MoleMole::SceneSoundPortalData*>* a3)
	{
		return ((::System::Single(*)(::PVOID, ::MoleMole::SceneSoundPolygonData*, ::MoleMole::SceneSoundPolygonData*, ::System::Collections::Generic::List_1<::MoleMole::SceneSoundPortalData*>*))((::PBYTE)hIl2Cpp + CLASS_2_0969C348BD815FDD_METHOD_2_29F1AB4F8BF143C2_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0969C348BD815FDD_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0969C348BD815FDD_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_2_9D0688AE2E08E349()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0969C348BD815FDD_METHOD_2_9D0688AE2E08E349_OFFSET))(this);
	}

	::System::Void Method_2_9699F0993A0206A3(::System::Int32 a1, ::Class_2_0969C348BD815FDD_Class_1_4EDF2E62A2BF85A9* a2, ::UnityEngine::Vector3 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Class_2_0969C348BD815FDD_Class_1_4EDF2E62A2BF85A9*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_0969C348BD815FDD_METHOD_2_9699F0993A0206A3_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_80BBB1FFBF365A2A(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_2_0969C348BD815FDD_METHOD_2_80BBB1FFBF365A2A_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0969C348BD815FDD_METHOD_2_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Void Method_2_4D12A6D748A5EF95(::System::Collections::Generic::List_1<::System::String*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_2_0969C348BD815FDD_METHOD_2_4D12A6D748A5EF95_OFFSET))(this, a1);
	}

	::System::Void Method_2_3BCF0226A6CDC13B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0969C348BD815FDD_METHOD_2_3BCF0226A6CDC13B_OFFSET))(this);
	}

	::System::Void Method_2_7EAA8879197594BA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0969C348BD815FDD_METHOD_2_7EAA8879197594BA_OFFSET))(this);
	}

	::System::Void Method_2_9A4DCB2B4ADEB8A9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0969C348BD815FDD_METHOD_2_9A4DCB2B4ADEB8A9_OFFSET))(this);
	}

	::System::Void Method_2_E5620F386550DA2F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0969C348BD815FDD_METHOD_2_E5620F386550DA2F_OFFSET))(this);
	}

	::System::Boolean Method_2_A85E3080F6F02136(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_0969C348BD815FDD_METHOD_2_A85E3080F6F02136_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_14AFBA2E8A242644()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0969C348BD815FDD_METHOD_2_14AFBA2E8A242644_OFFSET))(this);
	}

	::System::Void Method_2_967C63E6F042BD8A(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_0969C348BD815FDD_METHOD_2_967C63E6F042BD8A_OFFSET))(this, a1);
	}

	::System::Void Method_2_A0C79E167EE154F7(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_2_0969C348BD815FDD_METHOD_2_A0C79E167EE154F7_OFFSET))(this, a1);
	}

	::System::Void Method_2_D739CDB64C537A2B(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_2_0969C348BD815FDD_METHOD_2_D739CDB64C537A2B_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0969C348BD815FDD_METHOD_2_CA373AA1C7054598_2_OFFSET))(this);
	}

	::System::Void Method_2_273A34F921CC0A5A(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_0969C348BD815FDD_METHOD_2_273A34F921CC0A5A_OFFSET))(this, a1);
	}

	::System::Void Method_2_AD4DBD7C36DD8F3C(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_0969C348BD815FDD_METHOD_2_AD4DBD7C36DD8F3C_OFFSET))(this, a1);
	}

	::System::Void Method_2_5FAD56E9E208220A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0969C348BD815FDD_METHOD_2_5FAD56E9E208220A_OFFSET))(this);
	}

	::System::Void Method_2_430A8A499F660301(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_0969C348BD815FDD_METHOD_2_430A8A499F660301_OFFSET))(this, a1);
	}

	::System::Void Method_2_E9A575D18A0748D9(::Class_1_3002D7CF5FEE9D3A* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3002D7CF5FEE9D3A*))((::PBYTE)hIl2Cpp + CLASS_2_0969C348BD815FDD_METHOD_2_E9A575D18A0748D9_OFFSET))(this, a1);
	}

	::System::Void Method_2_01BA9D6EB27DD717(::MoleMole::SceneSoundPolygonData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SceneSoundPolygonData*))((::PBYTE)hIl2Cpp + CLASS_2_0969C348BD815FDD_METHOD_2_01BA9D6EB27DD717_OFFSET))(this, a1);
	}

	::MoleMole::SceneSoundData* Method_2_838567CF72365834()
	{
		return ((::MoleMole::SceneSoundData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0969C348BD815FDD_METHOD_2_838567CF72365834_OFFSET))(this);
	}

	::Class_1_3221F717AA0FB040* Method_2_24748FC20F375725()
	{
		return ((::Class_1_3221F717AA0FB040*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0969C348BD815FDD_METHOD_2_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_2_D081995AED5DD195(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_2_0969C348BD815FDD_METHOD_2_D081995AED5DD195_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::MoleMole::SceneSoundPolygonData*>* Method_2_C2AD9F9EDA773068_1()
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::SceneSoundPolygonData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0969C348BD815FDD_METHOD_2_C2AD9F9EDA773068_1_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_2_88498C7D3D24BED7(::System::Collections::Generic::List_1<::System::Single>* a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_2_0969C348BD815FDD_METHOD_2_88498C7D3D24BED7_OFFSET))(this, a1);
	}

	::System::Void Method_2_2F8A7C44565BF53E(::Class_2_0969C348BD815FDD_Class_1_4EDF2E62A2BF85A9* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_0969C348BD815FDD_Class_1_4EDF2E62A2BF85A9*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_0969C348BD815FDD_METHOD_2_2F8A7C44565BF53E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CA373AA1C7054598_3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0969C348BD815FDD_METHOD_2_CA373AA1C7054598_3_OFFSET))(this);
	}

	::System::Void Method_2_704FAC4600717444()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0969C348BD815FDD_METHOD_2_704FAC4600717444_OFFSET))(this);
	}

	::System::Void Method_2_27AAEDA142300EE9(::Class_1_3B91E8B5FF29338A* a1, ::Class_3_C93CC3D2C2AC4067* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3B91E8B5FF29338A*, ::Class_3_C93CC3D2C2AC4067*))((::PBYTE)hIl2Cpp + CLASS_2_0969C348BD815FDD_METHOD_2_27AAEDA142300EE9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_E69AA2E64A20143D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0969C348BD815FDD_METHOD_2_E69AA2E64A20143D_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0969C348BD815FDD_METHOD_2_CA373AA1C7054598_4_OFFSET))(this);
	}

	::System::Void Method_2_37DF4F842D04B26D(::Class_2_0969C348BD815FDD_Class_1_4EDF2E62A2BF85A9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_0969C348BD815FDD_Class_1_4EDF2E62A2BF85A9*))((::PBYTE)hIl2Cpp + CLASS_2_0969C348BD815FDD_METHOD_2_37DF4F842D04B26D_OFFSET))(this, a1);
	}
};
