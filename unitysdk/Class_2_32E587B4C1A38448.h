#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B4BE03363BD6F2CF.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_3002D7CF5FEE9D3A;
class Class_1_3B91E8B5FF29338A;
class Class_1_C9DFE5EE7107C629;
class Class_2_32E587B4C1A38448_Class_1_4EDF2E62A2BF85A9;
class Class_3_DFD5D1FDB9D2A4AC;
namespace MoleMole { class SceneSoundData; }
namespace MoleMole { class SceneSoundEmitterSpaceShapeParam; }
namespace MoleMole { class SceneSoundPolygonData; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_2_32E587B4C1A38448_GET_SOUNDACTIONSOURCEHINT_OFFSET UNITYSDK_OFFSET(0x14A13240)
#define CLASS_2_32E587B4C1A38448_GET_SOUNDGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x14A13230)
#define CLASS_2_32E587B4C1A38448_METHOD_2_050E70FEDB783306_OFFSET UNITYSDK_OFFSET(0x14A1B2A0)
#define CLASS_2_32E587B4C1A38448_METHOD_2_11A5396029C33A57_OFFSET UNITYSDK_OFFSET(0x14A18470)
#define CLASS_2_32E587B4C1A38448_METHOD_2_1CBBDF2842FD19D4_OFFSET UNITYSDK_OFFSET(0x14A14A50)
#define CLASS_2_32E587B4C1A38448_METHOD_2_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x14A1B1B0)
#define CLASS_2_32E587B4C1A38448_METHOD_2_1DE6433C25680F9D_OFFSET UNITYSDK_OFFSET(0x14A13F50)
#define CLASS_2_32E587B4C1A38448_METHOD_2_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x14A1EA70)
#define CLASS_2_32E587B4C1A38448_METHOD_2_273A34F921CC0A5A_OFFSET UNITYSDK_OFFSET(0x14A149B0)
#define CLASS_2_32E587B4C1A38448_METHOD_2_27AAEDA142300EE9_OFFSET UNITYSDK_OFFSET(0x14A1FFC0)
#define CLASS_2_32E587B4C1A38448_METHOD_2_2F8A7C44565BF53E_OFFSET UNITYSDK_OFFSET(0x14A1E5B0)
#define CLASS_2_32E587B4C1A38448_METHOD_2_34990AE7F0786741_1_OFFSET UNITYSDK_OFFSET(0x14A1D5E0)
#define CLASS_2_32E587B4C1A38448_METHOD_2_34990AE7F0786741_OFFSET UNITYSDK_OFFSET(0x14A18EA0)
#define CLASS_2_32E587B4C1A38448_METHOD_2_35537D55D369FC1D_OFFSET UNITYSDK_OFFSET(0x14A176F0)
#define CLASS_2_32E587B4C1A38448_METHOD_2_367B9590522079D1_OFFSET UNITYSDK_OFFSET(0x14A13BE0)
#define CLASS_2_32E587B4C1A38448_METHOD_2_37DF4F842D04B26D_OFFSET UNITYSDK_OFFSET(0x14A1E7F0)
#define CLASS_2_32E587B4C1A38448_METHOD_2_3E078E670629E10F_OFFSET UNITYSDK_OFFSET(0x14A1EB10)
#define CLASS_2_32E587B4C1A38448_METHOD_2_430A8A499F660301_OFFSET UNITYSDK_OFFSET(0x14A18C40)
#define CLASS_2_32E587B4C1A38448_METHOD_2_4679E7840A7526E1_OFFSET UNITYSDK_OFFSET(0x14A16590)
#define CLASS_2_32E587B4C1A38448_METHOD_2_4846DF9AB76EF245_OFFSET UNITYSDK_OFFSET(0x14A1DB90)
#define CLASS_2_32E587B4C1A38448_METHOD_2_4D12A6D748A5EF95_OFFSET UNITYSDK_OFFSET(0x14A19490)
#define CLASS_2_32E587B4C1A38448_METHOD_2_5827A5FB15016369_OFFSET UNITYSDK_OFFSET(0x14A18810)
#define CLASS_2_32E587B4C1A38448_METHOD_2_5FAD56E9E208220A_OFFSET UNITYSDK_OFFSET(0x14A19330)
#define CLASS_2_32E587B4C1A38448_METHOD_2_724025AF880C2293_OFFSET UNITYSDK_OFFSET(0x14A151A0)
#define CLASS_2_32E587B4C1A38448_METHOD_2_7E1BADD1D133FA1C_OFFSET UNITYSDK_OFFSET(0x14A15A90)
#define CLASS_2_32E587B4C1A38448_METHOD_2_7EAA8879197594BA_OFFSET UNITYSDK_OFFSET(0x14A1A5A0)
#define CLASS_2_32E587B4C1A38448_METHOD_2_8053180E4EAA604D_OFFSET UNITYSDK_OFFSET(0x14A1B400)
#define CLASS_2_32E587B4C1A38448_METHOD_2_80BBB1FFBF365A2A_OFFSET UNITYSDK_OFFSET(0x14A1FDF0)
#define CLASS_2_32E587B4C1A38448_METHOD_2_838567CF72365834_OFFSET UNITYSDK_OFFSET(0x14A1FDE0)
#define CLASS_2_32E587B4C1A38448_METHOD_2_88498C7D3D24BED7_OFFSET UNITYSDK_OFFSET(0x14A1F920)
#define CLASS_2_32E587B4C1A38448_METHOD_2_8C704EC832EDEFC8_OFFSET UNITYSDK_OFFSET(0x14A14380)
#define CLASS_2_32E587B4C1A38448_METHOD_2_8E51129BB7AF6021_OFFSET UNITYSDK_OFFSET(0x14A1F9D0)
#define CLASS_2_32E587B4C1A38448_METHOD_2_9699F0993A0206A3_OFFSET UNITYSDK_OFFSET(0x14A1C050)
#define CLASS_2_32E587B4C1A38448_METHOD_2_97D83E4CB3B11935_OFFSET UNITYSDK_OFFSET(0x14A17A70)
#define CLASS_2_32E587B4C1A38448_METHOD_2_9B65AEC684B9E219_OFFSET UNITYSDK_OFFSET(0x14A1B570)
#define CLASS_2_32E587B4C1A38448_METHOD_2_A0C79E167EE154F7_OFFSET UNITYSDK_OFFSET(0x14A1F8C0)
#define CLASS_2_32E587B4C1A38448_METHOD_2_B1983B8E0FEB5BBD_OFFSET UNITYSDK_OFFSET(0x14A17C70)
#define CLASS_2_32E587B4C1A38448_METHOD_2_BC3B33805876BEAE_OFFSET UNITYSDK_OFFSET(0x14A1ABC0)
#define CLASS_2_32E587B4C1A38448_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x14A1DA70)
#define CLASS_2_32E587B4C1A38448_METHOD_2_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x14A1DB00)
#define CLASS_2_32E587B4C1A38448_METHOD_2_CA373AA1C7054598_3_OFFSET UNITYSDK_OFFSET(0x14A1E9E0)
#define CLASS_2_32E587B4C1A38448_METHOD_2_CA373AA1C7054598_4_OFFSET UNITYSDK_OFFSET(0x14A1FD50)
#define CLASS_2_32E587B4C1A38448_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x14A1B210)
#define CLASS_2_32E587B4C1A38448_METHOD_2_CC99BBFAC9417CA7_OFFSET UNITYSDK_OFFSET(0x14A17180)
#define CLASS_2_32E587B4C1A38448_METHOD_2_D081995AED5DD195_OFFSET UNITYSDK_OFFSET(0x14A203A0)
#define CLASS_2_32E587B4C1A38448_METHOD_2_D739CDB64C537A2B_OFFSET UNITYSDK_OFFSET(0x14A1AD30)
#define CLASS_2_32E587B4C1A38448_METHOD_2_D872B256AFBA70AB_OFFSET UNITYSDK_OFFSET(0x14A1B330)
#define CLASS_2_32E587B4C1A38448_METHOD_2_DE4B9BEC257B0ADF_OFFSET UNITYSDK_OFFSET(0x14A1C550)
#define CLASS_2_32E587B4C1A38448_METHOD_2_E69AA2E64A20143D_OFFSET UNITYSDK_OFFSET(0x14A1DC20)
#define CLASS_2_32E587B4C1A38448_METHOD_2_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0x14A18BB0)
#define CLASS_2_32E587B4C1A38448_METHOD_2_F15F1A9019D1E348_OFFSET UNITYSDK_OFFSET(0x14A1EEE0)
#define CLASS_2_32E587B4C1A38448_METHOD_2_F206290BA342BA13_OFFSET UNITYSDK_OFFSET(0x14A162F0)
#define CLASS_2_32E587B4C1A38448__CCTOR_OFFSET UNITYSDK_OFFSET(0x14A18BA0)
#define CLASS_2_32E587B4C1A38448__CTOR_OFFSET UNITYSDK_OFFSET(0x14A13280)

inline static constexpr unsigned int Class_2_32E587B4C1A38448_TypeDefinitionIndex = 69712;

class Class_2_32E587B4C1A38448 : public ::Class_1_B4BE03363BD6F2CF
{
public:
	static ::System::UInt64* StaticGet_Field_2_18()
	{
		return (::System::UInt64*)Il2CppClass::FromTypeDefinitionIndex(Class_2_32E587B4C1A38448_TypeDefinitionIndex)->GetStaticField(0xBCD0);
	}
	::System::Collections::Generic::HashSet_1<::System::String*>* Field_2_27; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>* Field_2_12; // 0x20
	::System::Collections::Generic::HashSet_1<::System::String*>* Field_2_31; // 0x28
	::MoleMole::SceneSoundPolygonData* Field_2_14; // 0x30
	::System::Collections::Generic::HashSet_1<::System::String*>* Field_2_30; // 0x38
	::System::Collections::Generic::List_1<::System::String*>* Field_2_3; // 0x40
	::System::Collections::Generic::HashSet_1<::System::String*>* Field_2_8; // 0x48
	::System::Collections::Generic::List_1<::System::String*>* Field_2_2; // 0x50
	::System::Collections::Generic::HashSet_1<::System::String*>* Field_2_26; // 0x58
	::MoleMole::SceneSoundPolygonData* Field_2_16; // 0x60
	::System::Collections::Generic::List_1<::System::String*>* Field_2_1; // 0x68
	::System::Collections::Generic::HashSet_1<::System::String*>* Field_2_29; // 0x70
	::System::String* Field_2_17; // 0x78
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_2_25; // 0x80
	::System::Collections::Generic::List_1<::MoleMole::SceneSoundPolygonData*>* Field_2_13; // 0x88
	::System::Collections::Generic::HashSet_1<::System::String*>* Field_2_7; // 0x90
	::UnityEngine::GameObject* Field_2_6; // 0x98
	::System::Collections::Generic::List_1<::System::String*>* Field_2_4; // 0xA0
	::System::Collections::Generic::HashSet_1<::System::String*>* Field_2_34; // 0xA8
	::System::Collections::Generic::HashSet_1<::System::String*>* Field_2_28; // 0xB0
	::MoleMole::SceneSoundData* Field_2_5; // 0xB8
	::System::String* Field_2_24; // 0xC0
	::System::Collections::Generic::HashSet_1<::System::String*>* Field_2_35; // 0xC8
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_2_32E587B4C1A38448_Class_1_4EDF2E62A2BF85A9*>* Field_2_10; // 0xD0
	::System::UInt32 Field_2_11; // 0xD8
	::System::Int32 Field_2_0; // 0xDC
	::System::Int32 Field_2_19; // 0xE0
	::System::UInt32 Field_2_23; // 0xE4
	::System::Int32 Field_2_32; // 0xE8
	::System::Int32 Field_2_20; // 0xEC
	::System::Int32 Field_2_21; // 0xF0
	::System::Int32 Field_2_9; // 0xF4
	::System::Int32 Field_2_33; // 0xF8
	::System::Boolean Field_2_36; // 0xFC
	::System::Boolean Field_2_37; // 0xFD
	::System::Boolean Field_2_15; // 0xFE
	::System::Boolean Field_2_22; // 0xFF

	::System::Void _ctor(::Class_1_C9DFE5EE7107C629* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C9DFE5EE7107C629*))((::PBYTE)hIl2Cpp + CLASS_2_32E587B4C1A38448__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_32E587B4C1A38448__CCTOR_OFFSET))();
	}

	::UnityEngine::GameObject* get_soundGameObject()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_32E587B4C1A38448_GET_SOUNDGAMEOBJECT_OFFSET))(this);
	}

	::System::String* get_soundActionSourceHint()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_32E587B4C1A38448_GET_SOUNDACTIONSOURCEHINT_OFFSET))(this);
	}

	::System::Void Method_2_367B9590522079D1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_32E587B4C1A38448_METHOD_2_367B9590522079D1_OFFSET))(this);
	}

	::System::Void Method_2_1DE6433C25680F9D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_32E587B4C1A38448_METHOD_2_1DE6433C25680F9D_OFFSET))(this);
	}

	::System::Void Method_2_8C704EC832EDEFC8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_32E587B4C1A38448_METHOD_2_8C704EC832EDEFC8_OFFSET))(this);
	}

	::System::Void Method_2_1CBBDF2842FD19D4(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_32E587B4C1A38448_METHOD_2_1CBBDF2842FD19D4_OFFSET))(this, a1);
	}

	::System::Void Method_2_7E1BADD1D133FA1C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_32E587B4C1A38448_METHOD_2_7E1BADD1D133FA1C_OFFSET))(this);
	}

	::System::Void Method_2_35537D55D369FC1D(::Class_1_3002D7CF5FEE9D3A* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3002D7CF5FEE9D3A*))((::PBYTE)hIl2Cpp + CLASS_2_32E587B4C1A38448_METHOD_2_35537D55D369FC1D_OFFSET))(this, a1);
	}

	::System::Void Method_2_97D83E4CB3B11935()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_32E587B4C1A38448_METHOD_2_97D83E4CB3B11935_OFFSET))(this);
	}

	::System::Void Method_2_B1983B8E0FEB5BBD(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_32E587B4C1A38448_METHOD_2_B1983B8E0FEB5BBD_OFFSET))(this, a1);
	}

	::System::Void Method_2_E9A575D18A0748D9(::Class_1_3002D7CF5FEE9D3A* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3002D7CF5FEE9D3A*))((::PBYTE)hIl2Cpp + CLASS_2_32E587B4C1A38448_METHOD_2_E9A575D18A0748D9_OFFSET))(this, a1);
	}

	::System::Void Method_2_430A8A499F660301(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_32E587B4C1A38448_METHOD_2_430A8A499F660301_OFFSET))(this, a1);
	}

	::System::Void Method_2_34990AE7F0786741(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_32E587B4C1A38448_METHOD_2_34990AE7F0786741_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_5827A5FB15016369(::MoleMole::SceneSoundPolygonData* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::SceneSoundPolygonData*))((::PBYTE)hIl2Cpp + CLASS_2_32E587B4C1A38448_METHOD_2_5827A5FB15016369_OFFSET))(this, a1);
	}

	::System::Void Method_2_4679E7840A7526E1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_32E587B4C1A38448_METHOD_2_4679E7840A7526E1_OFFSET))(this);
	}

	::System::Void Method_2_CC99BBFAC9417CA7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_32E587B4C1A38448_METHOD_2_CC99BBFAC9417CA7_OFFSET))(this);
	}

	::System::Void Method_2_5FAD56E9E208220A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_32E587B4C1A38448_METHOD_2_5FAD56E9E208220A_OFFSET))(this);
	}

	::System::Void Method_2_7EAA8879197594BA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_32E587B4C1A38448_METHOD_2_7EAA8879197594BA_OFFSET))(this);
	}

	::System::Void Method_2_BC3B33805876BEAE(::System::Int32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_32E587B4C1A38448_METHOD_2_BC3B33805876BEAE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_D739CDB64C537A2B(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_2_32E587B4C1A38448_METHOD_2_D739CDB64C537A2B_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_32E587B4C1A38448_METHOD_2_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_32E587B4C1A38448_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_050E70FEDB783306(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_32E587B4C1A38448_METHOD_2_050E70FEDB783306_OFFSET))(this, a1);
	}

	::System::Void Method_2_D872B256AFBA70AB(::MoleMole::SceneSoundPolygonData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SceneSoundPolygonData*))((::PBYTE)hIl2Cpp + CLASS_2_32E587B4C1A38448_METHOD_2_D872B256AFBA70AB_OFFSET))(this, a1);
	}

	::System::Void Method_2_8053180E4EAA604D(::System::Collections::Generic::List_1<::System::String*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_2_32E587B4C1A38448_METHOD_2_8053180E4EAA604D_OFFSET))(this, a1);
	}

	::System::Void Method_2_9B65AEC684B9E219(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_32E587B4C1A38448_METHOD_2_9B65AEC684B9E219_OFFSET))(this, a1);
	}

	::System::Void Method_2_11A5396029C33A57()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_32E587B4C1A38448_METHOD_2_11A5396029C33A57_OFFSET))(this);
	}

	::System::Void Method_2_DE4B9BEC257B0ADF(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_32E587B4C1A38448_METHOD_2_DE4B9BEC257B0ADF_OFFSET))(this, a1);
	}

	::System::Void Method_2_34990AE7F0786741_1(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_32E587B4C1A38448_METHOD_2_34990AE7F0786741_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_32E587B4C1A38448_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_32E587B4C1A38448_METHOD_2_CA373AA1C7054598_2_OFFSET))(this);
	}

	::System::Void Method_2_4846DF9AB76EF245(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_32E587B4C1A38448_METHOD_2_4846DF9AB76EF245_OFFSET))(this, a1);
	}

	::System::Void Method_2_273A34F921CC0A5A(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_32E587B4C1A38448_METHOD_2_273A34F921CC0A5A_OFFSET))(this, a1);
	}

	::System::Void Method_2_9699F0993A0206A3(::System::Int32 a1, ::Class_2_32E587B4C1A38448_Class_1_4EDF2E62A2BF85A9* a2, ::UnityEngine::Vector3 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Class_2_32E587B4C1A38448_Class_1_4EDF2E62A2BF85A9*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_32E587B4C1A38448_METHOD_2_9699F0993A0206A3_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_CA373AA1C7054598_3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_32E587B4C1A38448_METHOD_2_CA373AA1C7054598_3_OFFSET))(this);
	}

	::System::Void Method_2_E69AA2E64A20143D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_32E587B4C1A38448_METHOD_2_E69AA2E64A20143D_OFFSET))(this);
	}

	::System::Void Method_2_4D12A6D748A5EF95(::System::Collections::Generic::List_1<::System::String*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_2_32E587B4C1A38448_METHOD_2_4D12A6D748A5EF95_OFFSET))(this, a1);
	}

	::System::Void Method_2_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_32E587B4C1A38448_METHOD_2_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Void Method_2_3E078E670629E10F(::UnityEngine::GameObject* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_32E587B4C1A38448_METHOD_2_3E078E670629E10F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_37DF4F842D04B26D(::Class_2_32E587B4C1A38448_Class_1_4EDF2E62A2BF85A9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_32E587B4C1A38448_Class_1_4EDF2E62A2BF85A9*))((::PBYTE)hIl2Cpp + CLASS_2_32E587B4C1A38448_METHOD_2_37DF4F842D04B26D_OFFSET))(this, a1);
	}

	::System::Void Method_2_2F8A7C44565BF53E(::Class_2_32E587B4C1A38448_Class_1_4EDF2E62A2BF85A9* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_32E587B4C1A38448_Class_1_4EDF2E62A2BF85A9*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_32E587B4C1A38448_METHOD_2_2F8A7C44565BF53E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_A0C79E167EE154F7(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_2_32E587B4C1A38448_METHOD_2_A0C79E167EE154F7_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_2_88498C7D3D24BED7(::System::Collections::Generic::List_1<::System::Single>* a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_2_32E587B4C1A38448_METHOD_2_88498C7D3D24BED7_OFFSET))(this, a1);
	}

	::System::Void Method_2_724025AF880C2293()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_32E587B4C1A38448_METHOD_2_724025AF880C2293_OFFSET))(this);
	}

	::System::Void Method_2_8E51129BB7AF6021(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_32E587B4C1A38448_METHOD_2_8E51129BB7AF6021_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598_4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_32E587B4C1A38448_METHOD_2_CA373AA1C7054598_4_OFFSET))(this);
	}

	::MoleMole::SceneSoundData* Method_2_838567CF72365834()
	{
		return ((::MoleMole::SceneSoundData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_32E587B4C1A38448_METHOD_2_838567CF72365834_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_2_F15F1A9019D1E348(::UnityEngine::Vector3 a1, ::UnityEngine::Transform* a2, ::MoleMole::SceneSoundEmitterSpaceShapeParam* a3)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Transform*, ::MoleMole::SceneSoundEmitterSpaceShapeParam*))((::PBYTE)hIl2Cpp + CLASS_2_32E587B4C1A38448_METHOD_2_F15F1A9019D1E348_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_80BBB1FFBF365A2A(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_2_32E587B4C1A38448_METHOD_2_80BBB1FFBF365A2A_OFFSET))(this, a1);
	}

	::System::Void Method_2_27AAEDA142300EE9(::Class_1_3B91E8B5FF29338A* a1, ::Class_3_DFD5D1FDB9D2A4AC* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3B91E8B5FF29338A*, ::Class_3_DFD5D1FDB9D2A4AC*))((::PBYTE)hIl2Cpp + CLASS_2_32E587B4C1A38448_METHOD_2_27AAEDA142300EE9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_D081995AED5DD195(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_2_32E587B4C1A38448_METHOD_2_D081995AED5DD195_OFFSET))(this, a1);
	}

	::System::Void Method_2_F206290BA342BA13()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_32E587B4C1A38448_METHOD_2_F206290BA342BA13_OFFSET))(this);
	}
};
