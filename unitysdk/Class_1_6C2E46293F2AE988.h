#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/TextureSheetType.h"
#include "unitysdk/System/Object.h"

class Class_2_1A39E1B51756BF41;
class Class_2_2EAAA8212B3AB2EF;
class Class_2_CA67A9CEB871FFD3;
namespace MoleMole { class TextureSheetData; }
namespace MoleMole::UGUIExtensions { class UITextureSheetRender; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine::Events { class UnityAction; }

#define CLASS_1_6C2E46293F2AE988_METHOD_1_33106570E09959CC_OFFSET UNITYSDK_OFFSET(0x1329D650)
#define CLASS_1_6C2E46293F2AE988_METHOD_1_33678EC34D973B35_OFFSET UNITYSDK_OFFSET(0x1329D580)
#define CLASS_1_6C2E46293F2AE988_METHOD_1_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x1329DC70)
#define CLASS_1_6C2E46293F2AE988_METHOD_1_43845157D4AE735E_OFFSET UNITYSDK_OFFSET(0x1329D830)
#define CLASS_1_6C2E46293F2AE988_METHOD_1_43A46E5F9FAC62B8_1_OFFSET UNITYSDK_OFFSET(0x1329DAA0)
#define CLASS_1_6C2E46293F2AE988_METHOD_1_43A46E5F9FAC62B8_OFFSET UNITYSDK_OFFSET(0x1329D240)
#define CLASS_1_6C2E46293F2AE988_METHOD_1_47469D21A32C3A08_OFFSET UNITYSDK_OFFSET(0x1329DB40)
#define CLASS_1_6C2E46293F2AE988_METHOD_1_4E9E4F18FD894AAD_OFFSET UNITYSDK_OFFSET(0x1329DA40)
#define CLASS_1_6C2E46293F2AE988_METHOD_1_58BA0C8308C8127F_OFFSET UNITYSDK_OFFSET(0x1329E090)
#define CLASS_1_6C2E46293F2AE988_METHOD_1_5AD1A9557B1248A3_1_OFFSET UNITYSDK_OFFSET(0x1329D870)
#define CLASS_1_6C2E46293F2AE988_METHOD_1_5AD1A9557B1248A3_OFFSET UNITYSDK_OFFSET(0x1329D660)
#define CLASS_1_6C2E46293F2AE988_METHOD_1_7B9D6F143086B23A_OFFSET UNITYSDK_OFFSET(0x1329D420)
#define CLASS_1_6C2E46293F2AE988_METHOD_1_88B60F3B95FAA4F1_OFFSET UNITYSDK_OFFSET(0x1329CDD0)
#define CLASS_1_6C2E46293F2AE988_METHOD_1_8CA88D55ECEFAD59_OFFSET UNITYSDK_OFFSET(0x1329D250)
#define CLASS_1_6C2E46293F2AE988_METHOD_1_A323A7720C85F580_OFFSET UNITYSDK_OFFSET(0x1329DE50)
#define CLASS_1_6C2E46293F2AE988_METHOD_1_AAD21DE195D05736_OFFSET UNITYSDK_OFFSET(0x1329E020)
#define CLASS_1_6C2E46293F2AE988_METHOD_1_B47117E54D657817_OFFSET UNITYSDK_OFFSET(0x1329DAB0)
#define CLASS_1_6C2E46293F2AE988_METHOD_1_CEBFF096B4C9D46B_OFFSET UNITYSDK_OFFSET(0x1329CE40)
#define CLASS_1_6C2E46293F2AE988_METHOD_1_D936AB3BBAC257FB_OFFSET UNITYSDK_OFFSET(0x1329CE30)
#define CLASS_1_6C2E46293F2AE988__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1329CC20)
#define CLASS_1_6C2E46293F2AE988__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1329CCB0)
#define CLASS_1_6C2E46293F2AE988__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1329CD40)
#define CLASS_1_6C2E46293F2AE988__CTOR_OFFSET UNITYSDK_OFFSET(0x1329CB90)

inline static constexpr unsigned int Class_1_6C2E46293F2AE988_TypeDefinitionIndex = 49181;

class Class_1_6C2E46293F2AE988 : public ::System::Object
{
public:
	::MoleMole::UGUIExtensions::UITextureSheetRender* Field_1_4; // 0x10
	::MoleMole::TextureSheetData* Field_1_0; // 0x18
	::Class_2_1A39E1B51756BF41* Field_1_10; // 0x20
	::Class_2_2EAAA8212B3AB2EF* Field_1_11; // 0x28
	::UnityEngine::Material* Field_1_8; // 0x30
	::System::Collections::Generic::List_1<::System::String*>* Field_1_7; // 0x38
	::Class_2_CA67A9CEB871FFD3* Field_1_9; // 0x40
	::System::Int32 Field_1_6; // 0x48
	::Foundation::Coroutine::CoroutineHandle Field_1_5; // 0x4C

	::System::Void _ctor(::Class_2_1A39E1B51756BF41* a1, ::MoleMole::TextureSheetType a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_1A39E1B51756BF41*, ::MoleMole::TextureSheetType, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_6C2E46293F2AE988__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void _ctor_1(::Class_2_1A39E1B51756BF41* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_1A39E1B51756BF41*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_6C2E46293F2AE988__CTOR_1_OFFSET))(this, a1, a2);
	}

	::System::Void _ctor_2(::Class_2_CA67A9CEB871FFD3* a1, ::MoleMole::TextureSheetType a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_CA67A9CEB871FFD3*, ::MoleMole::TextureSheetType, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_6C2E46293F2AE988__CTOR_2_OFFSET))(this, a1, a2, a3);
	}

	::System::Void _ctor_3(::Class_2_CA67A9CEB871FFD3* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_CA67A9CEB871FFD3*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_6C2E46293F2AE988__CTOR_3_OFFSET))(this, a1, a2);
	}

	::System::String* Method_1_88B60F3B95FAA4F1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6C2E46293F2AE988_METHOD_1_88B60F3B95FAA4F1_OFFSET))(this);
	}

	::MoleMole::UGUIExtensions::UITextureSheetRender* Method_1_D936AB3BBAC257FB()
	{
		return ((::MoleMole::UGUIExtensions::UITextureSheetRender*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6C2E46293F2AE988_METHOD_1_D936AB3BBAC257FB_OFFSET))(this);
	}

	::System::Void Method_1_CEBFF096B4C9D46B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6C2E46293F2AE988_METHOD_1_CEBFF096B4C9D46B_OFFSET))(this);
	}

	::Class_2_2EAAA8212B3AB2EF* Method_1_43A46E5F9FAC62B8()
	{
		return ((::Class_2_2EAAA8212B3AB2EF*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6C2E46293F2AE988_METHOD_1_43A46E5F9FAC62B8_OFFSET))(this);
	}

	::System::Void Method_1_8CA88D55ECEFAD59()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6C2E46293F2AE988_METHOD_1_8CA88D55ECEFAD59_OFFSET))(this);
	}

	::System::Void Method_1_7B9D6F143086B23A(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_6C2E46293F2AE988_METHOD_1_7B9D6F143086B23A_OFFSET))(this, a1);
	}

	::System::Void Method_1_33106570E09959CC(::MoleMole::UGUIExtensions::UITextureSheetRender* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UGUIExtensions::UITextureSheetRender*))((::PBYTE)hIl2Cpp + CLASS_1_6C2E46293F2AE988_METHOD_1_33106570E09959CC_OFFSET))(this, a1);
	}

	::System::Void Method_1_5AD1A9557B1248A3(::UnityEngine::Events::UnityAction* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + CLASS_1_6C2E46293F2AE988_METHOD_1_5AD1A9557B1248A3_OFFSET))(this, a1);
	}

	::MoleMole::TextureSheetData* Method_1_43845157D4AE735E()
	{
		return ((::MoleMole::TextureSheetData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6C2E46293F2AE988_METHOD_1_43845157D4AE735E_OFFSET))(this);
	}

	::System::Void Method_1_5AD1A9557B1248A3_1(::UnityEngine::Events::UnityAction* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + CLASS_1_6C2E46293F2AE988_METHOD_1_5AD1A9557B1248A3_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_4E9E4F18FD894AAD(::System::String* a1, ::MoleMole::TextureSheetType a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::TextureSheetType))((::PBYTE)hIl2Cpp + CLASS_1_6C2E46293F2AE988_METHOD_1_4E9E4F18FD894AAD_OFFSET))(this, a1, a2);
	}

	::Class_2_CA67A9CEB871FFD3* Method_1_43A46E5F9FAC62B8_1()
	{
		return ((::Class_2_CA67A9CEB871FFD3*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6C2E46293F2AE988_METHOD_1_43A46E5F9FAC62B8_1_OFFSET))(this);
	}

	::System::Void Method_1_B47117E54D657817(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_6C2E46293F2AE988_METHOD_1_B47117E54D657817_OFFSET))(this, a1);
	}

	::System::Void Method_1_47469D21A32C3A08(::System::Collections::Generic::List_1<::System::String*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_6C2E46293F2AE988_METHOD_1_47469D21A32C3A08_OFFSET))(this, a1);
	}

	::System::Void Method_1_A323A7720C85F580(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_6C2E46293F2AE988_METHOD_1_A323A7720C85F580_OFFSET))(this, a1);
	}

	::System::Void Method_1_AAD21DE195D05736()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6C2E46293F2AE988_METHOD_1_AAD21DE195D05736_OFFSET))(this);
	}

	::System::Void Method_1_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6C2E46293F2AE988_METHOD_1_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void Method_1_58BA0C8308C8127F(::Class_2_2EAAA8212B3AB2EF* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_2EAAA8212B3AB2EF*))((::PBYTE)hIl2Cpp + CLASS_1_6C2E46293F2AE988_METHOD_1_58BA0C8308C8127F_OFFSET))(this, a1);
	}

	::System::Void Method_1_33678EC34D973B35(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_6C2E46293F2AE988_METHOD_1_33678EC34D973B35_OFFSET))(this, a1);
	}
};
