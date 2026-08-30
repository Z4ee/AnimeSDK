#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_028E1BE338E8A2D9_Struct_2_F72FF6214B8688E7.h"
#include "unitysdk/Struct_2_CC45B4503679E14E_11.h"
#include "unitysdk/Struct_2_CC45B4503679E14E_21.h"
#include "unitysdk/System/Object.h"

class Class_1_028E1BE338E8A2D9_Class_1_18FFD9DAACAA85F6_1;
class Class_1_028E1BE338E8A2D9_Class_1_83B69D0863CB38B8;
class Class_1_1342B57709FD7AC5;
namespace RPG::Client { class RendererMaterialCache; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Shader; }

#define CLASS_1_028E1BE338E8A2D9_METHOD_1_00D229E32E7208E7_OFFSET UNITYSDK_OFFSET(0x179F3510)
#define CLASS_1_028E1BE338E8A2D9_METHOD_1_0C4C78D11075A0E7_OFFSET UNITYSDK_OFFSET(0x179F5250)
#define CLASS_1_028E1BE338E8A2D9_METHOD_1_0F3D3A5ABDA9779E_OFFSET UNITYSDK_OFFSET(0x179F7880)
#define CLASS_1_028E1BE338E8A2D9_METHOD_1_157780D742F73482_OFFSET UNITYSDK_OFFSET(0x179F4730)
#define CLASS_1_028E1BE338E8A2D9_METHOD_1_3009613B7378EC99_OFFSET UNITYSDK_OFFSET(0x179F83A0)
#define CLASS_1_028E1BE338E8A2D9_METHOD_1_303139A55D49AB24_OFFSET UNITYSDK_OFFSET(0x179F7DB0)
#define CLASS_1_028E1BE338E8A2D9_METHOD_1_3DA5946C733FDDF3_OFFSET UNITYSDK_OFFSET(0x179F2710)
#define CLASS_1_028E1BE338E8A2D9_METHOD_1_3DFFEA8885EDBFF0_1_OFFSET UNITYSDK_OFFSET(0x179F2CA0)
#define CLASS_1_028E1BE338E8A2D9_METHOD_1_3DFFEA8885EDBFF0_OFFSET UNITYSDK_OFFSET(0x179F2C40)
#define CLASS_1_028E1BE338E8A2D9_METHOD_1_64BCB6BFAF4D12B5_OFFSET UNITYSDK_OFFSET(0x179F1FB0)
#define CLASS_1_028E1BE338E8A2D9_METHOD_1_64D346296135F691_OFFSET UNITYSDK_OFFSET(0x179F3D50)
#define CLASS_1_028E1BE338E8A2D9_METHOD_1_6F375C1C2F99739B_OFFSET UNITYSDK_OFFSET(0x179F3ED0)
#define CLASS_1_028E1BE338E8A2D9_METHOD_1_7157E379F070DF46_1_OFFSET UNITYSDK_OFFSET(0x179F2E00)
#define CLASS_1_028E1BE338E8A2D9_METHOD_1_7157E379F070DF46_OFFSET UNITYSDK_OFFSET(0x179F2D00)
#define CLASS_1_028E1BE338E8A2D9_METHOD_1_89CCE5357542D019_OFFSET UNITYSDK_OFFSET(0x179F39E0)
#define CLASS_1_028E1BE338E8A2D9_METHOD_1_91300B4184571709_OFFSET UNITYSDK_OFFSET(0x179F30B0)
#define CLASS_1_028E1BE338E8A2D9_METHOD_1_9FFDD76E41BB7DDA_OFFSET UNITYSDK_OFFSET(0x179F2F00)
#define CLASS_1_028E1BE338E8A2D9_METHOD_1_A0CEEC748BE5C32D_OFFSET UNITYSDK_OFFSET(0x179F27B0)
#define CLASS_1_028E1BE338E8A2D9_METHOD_1_B565CD9463089626_OFFSET UNITYSDK_OFFSET(0x179F5E60)
#define CLASS_1_028E1BE338E8A2D9_METHOD_1_CE18697B63E52504_OFFSET UNITYSDK_OFFSET(0x179F2690)
#define CLASS_1_028E1BE338E8A2D9_METHOD_1_D3D59B4DDEB2917A_OFFSET UNITYSDK_OFFSET(0x179F36D0)
#define CLASS_1_028E1BE338E8A2D9_METHOD_1_DF2BEFB5B85E8365_OFFSET UNITYSDK_OFFSET(0x179F58A0)
#define CLASS_1_028E1BE338E8A2D9_METHOD_1_E714CC143570FC22_OFFSET UNITYSDK_OFFSET(0x179F3320)
#define CLASS_1_028E1BE338E8A2D9_METHOD_1_E8B7EFA86DE84508_OFFSET UNITYSDK_OFFSET(0x179F3260)
#define CLASS_1_028E1BE338E8A2D9_METHOD_1_ECBACCD9D58F2D1E_OFFSET UNITYSDK_OFFSET(0x179F38B0)
#define CLASS_1_028E1BE338E8A2D9_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x179F2650)
#define CLASS_1_028E1BE338E8A2D9_METHOD_1_F38627795509082E_OFFSET UNITYSDK_OFFSET(0x179F2820)
#define CLASS_1_028E1BE338E8A2D9_METHOD_1_F5C1BADCFD4C3383_OFFSET UNITYSDK_OFFSET(0x179F2170)
#define CLASS_1_028E1BE338E8A2D9_METHOD_1_F952602D4DA98B63_OFFSET UNITYSDK_OFFSET(0x179F5AB0)
#define CLASS_1_028E1BE338E8A2D9__CCTOR_OFFSET UNITYSDK_OFFSET(0x179F8810)

inline static constexpr unsigned int Class_1_028E1BE338E8A2D9_TypeDefinitionIndex = 70991;

class Class_1_028E1BE338E8A2D9 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_028E1BE338E8A2D9_Class_1_83B69D0863CB38B8*>** StaticGet_CDNBGGKIOMB()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_028E1BE338E8A2D9_Class_1_83B69D0863CB38B8*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_028E1BE338E8A2D9_TypeDefinitionIndex)->GetStaticField(0x2BA0);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>** StaticGet_EAHMOOGPAAP()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_028E1BE338E8A2D9_TypeDefinitionIndex)->GetStaticField(0x2BA8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_028E1BE338E8A2D9__CCTOR_OFFSET))();
	}

	static ::System::Int32 Method_1_64BCB6BFAF4D12B5(::System::String* a1)
	{
		return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_028E1BE338E8A2D9_METHOD_1_64BCB6BFAF4D12B5_OFFSET))(a1);
	}

	static ::Class_1_028E1BE338E8A2D9_Class_1_83B69D0863CB38B8* Method_1_F5C1BADCFD4C3383(::UnityEngine::GameObject* a1)
	{
		return ((::Class_1_028E1BE338E8A2D9_Class_1_83B69D0863CB38B8*(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_028E1BE338E8A2D9_METHOD_1_F5C1BADCFD4C3383_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_028E1BE338E8A2D9_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Boolean Method_1_CE18697B63E52504()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_028E1BE338E8A2D9_METHOD_1_CE18697B63E52504_OFFSET))();
	}

	static ::System::Boolean Method_1_3DA5946C733FDDF3(::UnityEngine::Shader* a1, ::System::String* a2)
	{
		return ((::System::Boolean(*)(::UnityEngine::Shader*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_028E1BE338E8A2D9_METHOD_1_3DA5946C733FDDF3_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_A0CEEC748BE5C32D(::UnityEngine::GameObject* a1, ::Class_1_028E1BE338E8A2D9_Class_1_83B69D0863CB38B8* a2)
	{
		return ((::System::Void(*)(::UnityEngine::GameObject*, ::Class_1_028E1BE338E8A2D9_Class_1_83B69D0863CB38B8*))((::PBYTE)hIl2Cpp + CLASS_1_028E1BE338E8A2D9_METHOD_1_A0CEEC748BE5C32D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_F38627795509082E(::UnityEngine::GameObject* a1, ::Class_1_028E1BE338E8A2D9_Class_1_83B69D0863CB38B8* a2)
	{
		return ((::System::Void(*)(::UnityEngine::GameObject*, ::Class_1_028E1BE338E8A2D9_Class_1_83B69D0863CB38B8*))((::PBYTE)hIl2Cpp + CLASS_1_028E1BE338E8A2D9_METHOD_1_F38627795509082E_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_3DFFEA8885EDBFF0(::Struct_2_CC45B4503679E14E_21 a1)
	{
		return ((::System::Boolean(*)(::Struct_2_CC45B4503679E14E_21))((::PBYTE)hIl2Cpp + CLASS_1_028E1BE338E8A2D9_METHOD_1_3DFFEA8885EDBFF0_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_3DFFEA8885EDBFF0_1(::Struct_2_CC45B4503679E14E_21 a1)
	{
		return ((::System::Boolean(*)(::Struct_2_CC45B4503679E14E_21))((::PBYTE)hIl2Cpp + CLASS_1_028E1BE338E8A2D9_METHOD_1_3DFFEA8885EDBFF0_1_OFFSET))(a1);
	}

	static ::System::String* Method_1_7157E379F070DF46(::Struct_2_CC45B4503679E14E_21 a1)
	{
		return ((::System::String*(*)(::Struct_2_CC45B4503679E14E_21))((::PBYTE)hIl2Cpp + CLASS_1_028E1BE338E8A2D9_METHOD_1_7157E379F070DF46_OFFSET))(a1);
	}

	static ::System::String* Method_1_7157E379F070DF46_1(::Struct_2_CC45B4503679E14E_21 a1)
	{
		return ((::System::String*(*)(::Struct_2_CC45B4503679E14E_21))((::PBYTE)hIl2Cpp + CLASS_1_028E1BE338E8A2D9_METHOD_1_7157E379F070DF46_1_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_9FFDD76E41BB7DDA(::Struct_2_CC45B4503679E14E_21 a1)
	{
		return ((::System::Boolean(*)(::Struct_2_CC45B4503679E14E_21))((::PBYTE)hIl2Cpp + CLASS_1_028E1BE338E8A2D9_METHOD_1_9FFDD76E41BB7DDA_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_91300B4184571709(::UnityEngine::Renderer* a1, ::System::String* a2)
	{
		return ((::System::Boolean(*)(::UnityEngine::Renderer*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_028E1BE338E8A2D9_METHOD_1_91300B4184571709_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_E8B7EFA86DE84508(::UnityEngine::Renderer* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::UnityEngine::Renderer*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_028E1BE338E8A2D9_METHOD_1_E8B7EFA86DE84508_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_E714CC143570FC22(::UnityEngine::MaterialPropertyBlock* a1, ::System::Int32 a2, ::Struct_2_CC45B4503679E14E_21 a3)
	{
		return ((::System::Void(*)(::UnityEngine::MaterialPropertyBlock*, ::System::Int32, ::Struct_2_CC45B4503679E14E_21))((::PBYTE)hIl2Cpp + CLASS_1_028E1BE338E8A2D9_METHOD_1_E714CC143570FC22_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_00D229E32E7208E7(::UnityEngine::Material* a1, ::System::Int32 a2, ::Struct_2_CC45B4503679E14E_21 a3)
	{
		return ((::System::Void(*)(::UnityEngine::Material*, ::System::Int32, ::Struct_2_CC45B4503679E14E_21))((::PBYTE)hIl2Cpp + CLASS_1_028E1BE338E8A2D9_METHOD_1_00D229E32E7208E7_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_D3D59B4DDEB2917A(::RPG::Client::RendererMaterialCache* a1, ::System::Int32 a2, ::Struct_2_CC45B4503679E14E_21 a3)
	{
		return ((::System::Void(*)(::RPG::Client::RendererMaterialCache*, ::System::Int32, ::Struct_2_CC45B4503679E14E_21))((::PBYTE)hIl2Cpp + CLASS_1_028E1BE338E8A2D9_METHOD_1_D3D59B4DDEB2917A_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_ECBACCD9D58F2D1E(::UnityEngine::Material* a1, ::UnityEngine::Material* a2, ::System::Int32 a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::UnityEngine::Material*, ::UnityEngine::Material*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_028E1BE338E8A2D9_METHOD_1_ECBACCD9D58F2D1E_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Boolean Method_1_89CCE5357542D019(::UnityEngine::Material* a1, ::Class_1_028E1BE338E8A2D9_Struct_2_F72FF6214B8688E7 a2, ::System::Boolean a3, ::System::Boolean a4)
	{
		return ((::System::Boolean(*)(::UnityEngine::Material*, ::Class_1_028E1BE338E8A2D9_Struct_2_F72FF6214B8688E7, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_028E1BE338E8A2D9_METHOD_1_89CCE5357542D019_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Boolean Method_1_64D346296135F691(::RPG::Client::RendererMaterialCache* a1, ::Class_1_028E1BE338E8A2D9_Struct_2_F72FF6214B8688E7 a2, ::System::Boolean a3, ::System::Boolean a4)
	{
		return ((::System::Boolean(*)(::RPG::Client::RendererMaterialCache*, ::Class_1_028E1BE338E8A2D9_Struct_2_F72FF6214B8688E7, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_028E1BE338E8A2D9_METHOD_1_64D346296135F691_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Boolean Method_1_6F375C1C2F99739B(::Class_1_1342B57709FD7AC5* a1, ::System::Collections::Generic::List_1<::Class_1_028E1BE338E8A2D9_Struct_2_F72FF6214B8688E7>* a2, ::System::Boolean a3, ::System::Boolean a4)
	{
		return ((::System::Boolean(*)(::Class_1_1342B57709FD7AC5*, ::System::Collections::Generic::List_1<::Class_1_028E1BE338E8A2D9_Struct_2_F72FF6214B8688E7>*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_028E1BE338E8A2D9_METHOD_1_6F375C1C2F99739B_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_157780D742F73482(::RPG::Client::RendererMaterialCache* a1, ::System::Int32 a2, ::Struct_2_CC45B4503679E14E_21 a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::RPG::Client::RendererMaterialCache*, ::System::Int32, ::Struct_2_CC45B4503679E14E_21, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_028E1BE338E8A2D9_METHOD_1_157780D742F73482_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Boolean Method_1_0C4C78D11075A0E7(::Class_1_028E1BE338E8A2D9_Class_1_83B69D0863CB38B8* a1, ::Class_1_1342B57709FD7AC5* a2, ::System::Collections::Generic::List_1<::Class_1_028E1BE338E8A2D9_Struct_2_F72FF6214B8688E7>* a3, ::System::Boolean a4, ::System::Boolean a5)
	{
		return ((::System::Boolean(*)(::Class_1_028E1BE338E8A2D9_Class_1_83B69D0863CB38B8*, ::Class_1_1342B57709FD7AC5*, ::System::Collections::Generic::List_1<::Class_1_028E1BE338E8A2D9_Struct_2_F72FF6214B8688E7>*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_028E1BE338E8A2D9_METHOD_1_0C4C78D11075A0E7_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_1_DF2BEFB5B85E8365(::Class_1_028E1BE338E8A2D9_Class_1_83B69D0863CB38B8* a1)
	{
		return ((::System::Void(*)(::Class_1_028E1BE338E8A2D9_Class_1_83B69D0863CB38B8*))((::PBYTE)hIl2Cpp + CLASS_1_028E1BE338E8A2D9_METHOD_1_DF2BEFB5B85E8365_OFFSET))(a1);
	}

	static ::System::Void Method_1_F952602D4DA98B63(::Class_1_028E1BE338E8A2D9_Class_1_83B69D0863CB38B8* a1)
	{
		return ((::System::Void(*)(::Class_1_028E1BE338E8A2D9_Class_1_83B69D0863CB38B8*))((::PBYTE)hIl2Cpp + CLASS_1_028E1BE338E8A2D9_METHOD_1_F952602D4DA98B63_OFFSET))(a1);
	}

	static ::System::Void Method_1_B565CD9463089626(::UnityEngine::GameObject* a1, ::System::Collections::Generic::IList_1<::Struct_2_CC45B4503679E14E_21>* a2, ::System::Boolean a3, ::System::Boolean a4, ::Class_1_028E1BE338E8A2D9_Class_1_18FFD9DAACAA85F6_1* a5, ::System::Boolean a6)
	{
		return ((::System::Void(*)(::UnityEngine::GameObject*, ::System::Collections::Generic::IList_1<::Struct_2_CC45B4503679E14E_21>*, ::System::Boolean, ::System::Boolean, ::Class_1_028E1BE338E8A2D9_Class_1_18FFD9DAACAA85F6_1*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_028E1BE338E8A2D9_METHOD_1_B565CD9463089626_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::Void Method_1_303139A55D49AB24(::UnityEngine::GameObject* a1, ::Struct_2_CC45B4503679E14E_11 a2, ::System::Boolean a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::UnityEngine::GameObject*, ::Struct_2_CC45B4503679E14E_11, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_028E1BE338E8A2D9_METHOD_1_303139A55D49AB24_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_0F3D3A5ABDA9779E(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_028E1BE338E8A2D9_METHOD_1_0F3D3A5ABDA9779E_OFFSET))(a1);
	}

	static ::System::Void Method_1_3009613B7378EC99(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_028E1BE338E8A2D9_METHOD_1_3009613B7378EC99_OFFSET))(a1);
	}
};
