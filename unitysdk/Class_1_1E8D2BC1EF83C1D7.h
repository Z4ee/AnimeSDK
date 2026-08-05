#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetLoadCacheKey.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/System/Object.h"

class Class_2_1A39E1B51756BF41;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Sprite; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }

#define CLASS_1_1E8D2BC1EF83C1D7_METHOD_1_0D03A3384AD603EF_OFFSET UNITYSDK_OFFSET(0x14CB1490)
#define CLASS_1_1E8D2BC1EF83C1D7_METHOD_1_1289C76924B12EAF_OFFSET UNITYSDK_OFFSET(0x14CB4040)
#define CLASS_1_1E8D2BC1EF83C1D7_METHOD_1_17FA0422991FF5E1_OFFSET UNITYSDK_OFFSET(0x14CB0FA0)
#define CLASS_1_1E8D2BC1EF83C1D7_METHOD_1_19A243F71AC9569D_OFFSET UNITYSDK_OFFSET(0x14CB3E50)
#define CLASS_1_1E8D2BC1EF83C1D7_METHOD_1_289E069BEBB00D08_OFFSET UNITYSDK_OFFSET(0x14CB2B00)
#define CLASS_1_1E8D2BC1EF83C1D7_METHOD_1_2C38C45A06C4F43E_OFFSET UNITYSDK_OFFSET(0x14CB46F0)
#define CLASS_1_1E8D2BC1EF83C1D7_METHOD_1_2E806A43A7F1E286_OFFSET UNITYSDK_OFFSET(0x14CB0B70)
#define CLASS_1_1E8D2BC1EF83C1D7_METHOD_1_3368A955600D49B7_OFFSET UNITYSDK_OFFSET(0x14CB3580)
#define CLASS_1_1E8D2BC1EF83C1D7_METHOD_1_49B12F8094E117D0_OFFSET UNITYSDK_OFFSET(0x14CB4920)
#define CLASS_1_1E8D2BC1EF83C1D7_METHOD_1_4B76CED1EE263E14_OFFSET UNITYSDK_OFFSET(0x14CB3F00)
#define CLASS_1_1E8D2BC1EF83C1D7_METHOD_1_4C2A407444543FB7_OFFSET UNITYSDK_OFFSET(0x14CB34E0)
#define CLASS_1_1E8D2BC1EF83C1D7_METHOD_1_4C9F348918F0BA3D_OFFSET UNITYSDK_OFFSET(0x14CB1620)
#define CLASS_1_1E8D2BC1EF83C1D7_METHOD_1_4E462256C54788ED_OFFSET UNITYSDK_OFFSET(0x14CB3900)
#define CLASS_1_1E8D2BC1EF83C1D7_METHOD_1_59190FAA997CC23F_OFFSET UNITYSDK_OFFSET(0x14CB4400)
#define CLASS_1_1E8D2BC1EF83C1D7_METHOD_1_663635FC436CF63C_OFFSET UNITYSDK_OFFSET(0x14CB2730)
#define CLASS_1_1E8D2BC1EF83C1D7_METHOD_1_7CF8E015B7C82EAA_OFFSET UNITYSDK_OFFSET(0x14CB2F80)
#define CLASS_1_1E8D2BC1EF83C1D7_METHOD_1_871FC9C75EE72A2C_OFFSET UNITYSDK_OFFSET(0x14CB4840)
#define CLASS_1_1E8D2BC1EF83C1D7_METHOD_1_906E868759828A7F_OFFSET UNITYSDK_OFFSET(0x14CB49D0)
#define CLASS_1_1E8D2BC1EF83C1D7_METHOD_1_970D9BBAEECEBF3E_OFFSET UNITYSDK_OFFSET(0x14CB3FB0)
#define CLASS_1_1E8D2BC1EF83C1D7_METHOD_1_A3547BABB06EC35A_OFFSET UNITYSDK_OFFSET(0x14CB1700)
#define CLASS_1_1E8D2BC1EF83C1D7_METHOD_1_A4B43BB6DF03405F_OFFSET UNITYSDK_OFFSET(0x14CB23A0)
#define CLASS_1_1E8D2BC1EF83C1D7_METHOD_1_A933534E99843834_OFFSET UNITYSDK_OFFSET(0x14CAFFE0)
#define CLASS_1_1E8D2BC1EF83C1D7_METHOD_1_A9DAF3FE2888211B_OFFSET UNITYSDK_OFFSET(0x14CAFD90)
#define CLASS_1_1E8D2BC1EF83C1D7_METHOD_1_B11E5E2802BCC01F_OFFSET UNITYSDK_OFFSET(0x14CB1CF0)
#define CLASS_1_1E8D2BC1EF83C1D7_METHOD_1_BD639774086BCC66_OFFSET UNITYSDK_OFFSET(0x14CB0EF0)
#define CLASS_1_1E8D2BC1EF83C1D7_METHOD_1_C1D1279A0E6E9CBF_OFFSET UNITYSDK_OFFSET(0x14CB47B0)
#define CLASS_1_1E8D2BC1EF83C1D7_METHOD_1_C495FC84AA2302E0_OFFSET UNITYSDK_OFFSET(0x14CB07C0)
#define CLASS_1_1E8D2BC1EF83C1D7_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x14CB2AF0)
#define CLASS_1_1E8D2BC1EF83C1D7_METHOD_1_D3E836A1A3C7BA75_OFFSET UNITYSDK_OFFSET(0x14CB33E0)
#define CLASS_1_1E8D2BC1EF83C1D7_METHOD_1_D4B3608B292F0A4E_OFFSET UNITYSDK_OFFSET(0x14CB13F0)
#define CLASS_1_1E8D2BC1EF83C1D7_METHOD_1_E2B18B851C7D7E4F_OFFSET UNITYSDK_OFFSET(0x14CB03D0)
#define CLASS_1_1E8D2BC1EF83C1D7_METHOD_1_E3FAE0F50618D019_OFFSET UNITYSDK_OFFSET(0x14CB3D90)
#define CLASS_1_1E8D2BC1EF83C1D7_METHOD_1_E756FFE5B3ACE41A_OFFSET UNITYSDK_OFFSET(0x14CAFF30)
#define CLASS_1_1E8D2BC1EF83C1D7_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x14CAFD70)
#define CLASS_1_1E8D2BC1EF83C1D7_METHOD_1_F0088C88851A7DFB_2_OFFSET UNITYSDK_OFFSET(0x14CB2AE0)
#define CLASS_1_1E8D2BC1EF83C1D7_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x14CAFD60)
#define CLASS_1_1E8D2BC1EF83C1D7__CTOR_OFFSET UNITYSDK_OFFSET(0x14CAFD80)

inline static constexpr unsigned int Class_1_1E8D2BC1EF83C1D7_TypeDefinitionIndex = 81112;

class Class_1_1E8D2BC1EF83C1D7 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::UnityEngine::Material*, ::Foundation::AssetPath>* Field_1_1; // 0x10
	::System::Collections::Generic::Dictionary_2<::Foundation::AssetLoadCacheKey, ::Foundation::AssetRequestHandle>* Field_1_2; // 0x18
	::System::Boolean Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1E8D2BC1EF83C1D7__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1E8D2BC1EF83C1D7_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1E8D2BC1EF83C1D7_METHOD_1_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::Void Method_1_E756FFE5B3ACE41A(::System::String* a1, ::System::Action_1<::UnityEngine::Sprite*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::UnityEngine::Sprite*>*))((::PBYTE)hIl2Cpp + CLASS_1_1E8D2BC1EF83C1D7_METHOD_1_E756FFE5B3ACE41A_OFFSET))(this, a1, a2);
	}

	::Foundation::AssetRequestHandle Method_1_E2B18B851C7D7E4F(::Foundation::AssetPath a1, ::System::Action_1<::Foundation::AssetRequestHandle>* a2)
	{
		return ((::Foundation::AssetRequestHandle(*)(::PVOID, ::Foundation::AssetPath, ::System::Action_1<::Foundation::AssetRequestHandle>*))((::PBYTE)hIl2Cpp + CLASS_1_1E8D2BC1EF83C1D7_METHOD_1_E2B18B851C7D7E4F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_C495FC84AA2302E0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1E8D2BC1EF83C1D7_METHOD_1_C495FC84AA2302E0_OFFSET))(this);
	}

	::UnityEngine::Sprite* Method_1_2E806A43A7F1E286(::Foundation::AssetPath a1)
	{
		return ((::UnityEngine::Sprite*(*)(::PVOID, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + CLASS_1_1E8D2BC1EF83C1D7_METHOD_1_2E806A43A7F1E286_OFFSET))(this, a1);
	}

	::UnityEngine::Sprite* Method_1_BD639774086BCC66(::System::String* a1, ::Foundation::AssetRequestHandle& a2)
	{
		return ((::UnityEngine::Sprite*(*)(::PVOID, ::System::String*, ::Foundation::AssetRequestHandle&))((::PBYTE)hIl2Cpp + CLASS_1_1E8D2BC1EF83C1D7_METHOD_1_BD639774086BCC66_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Sprite* Method_1_D4B3608B292F0A4E(::System::String* a1)
	{
		return ((::UnityEngine::Sprite*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_1E8D2BC1EF83C1D7_METHOD_1_D4B3608B292F0A4E_OFFSET))(this, a1);
	}

	::System::Void Method_1_0D03A3384AD603EF(::Foundation::AssetLoadCacheKey a1)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AssetLoadCacheKey))((::PBYTE)hIl2Cpp + CLASS_1_1E8D2BC1EF83C1D7_METHOD_1_0D03A3384AD603EF_OFFSET))(this, a1);
	}

	::UnityEngine::Sprite* Method_1_4C9F348918F0BA3D(::UnityEngine::UI::Image* a1, ::System::String* a2, ::System::Boolean a3, ::System::Boolean a4)
	{
		return ((::UnityEngine::Sprite*(*)(::PVOID, ::UnityEngine::UI::Image*, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_1E8D2BC1EF83C1D7_METHOD_1_4C9F348918F0BA3D_OFFSET))(this, a1, a2, a3, a4);
	}

	::UnityEngine::Sprite* Method_1_B11E5E2802BCC01F(::Class_2_1A39E1B51756BF41* a1, ::Foundation::AssetPath a2, ::System::Boolean a3, ::System::Boolean a4, ::Foundation::AssetRequestHandle& a5)
	{
		return ((::UnityEngine::Sprite*(*)(::PVOID, ::Class_2_1A39E1B51756BF41*, ::Foundation::AssetPath, ::System::Boolean, ::System::Boolean, ::Foundation::AssetRequestHandle&))((::PBYTE)hIl2Cpp + CLASS_1_1E8D2BC1EF83C1D7_METHOD_1_B11E5E2802BCC01F_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::UnityEngine::Texture2D* Method_1_663635FC436CF63C(::Foundation::AssetPath a1, ::Foundation::AssetRequestHandle& a2)
	{
		return ((::UnityEngine::Texture2D*(*)(::PVOID, ::Foundation::AssetPath, ::Foundation::AssetRequestHandle&))((::PBYTE)hIl2Cpp + CLASS_1_1E8D2BC1EF83C1D7_METHOD_1_663635FC436CF63C_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1E8D2BC1EF83C1D7_METHOD_1_F0088C88851A7DFB_2_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_1E8D2BC1EF83C1D7_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::UnityEngine::Material* Method_1_A4B43BB6DF03405F(::Foundation::AssetPath a1)
	{
		return ((::UnityEngine::Material*(*)(::PVOID, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + CLASS_1_1E8D2BC1EF83C1D7_METHOD_1_A4B43BB6DF03405F_OFFSET))(this, a1);
	}

	::System::Void Method_1_289E069BEBB00D08(::UnityEngine::UI::Image* a1, ::Foundation::AssetPath a2, ::System::Action_1<::Foundation::AssetRequestHandle>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Image*, ::Foundation::AssetPath, ::System::Action_1<::Foundation::AssetRequestHandle>*))((::PBYTE)hIl2Cpp + CLASS_1_1E8D2BC1EF83C1D7_METHOD_1_289E069BEBB00D08_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_A933534E99843834(::Foundation::AssetPath a1, ::System::Action_1<::UnityEngine::Sprite*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath, ::System::Action_1<::UnityEngine::Sprite*>*))((::PBYTE)hIl2Cpp + CLASS_1_1E8D2BC1EF83C1D7_METHOD_1_A933534E99843834_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_7CF8E015B7C82EAA(::UnityEngine::UI::Image* a1, ::Foundation::AssetPath a2, ::System::Action_1<::System::Boolean>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Image*, ::Foundation::AssetPath, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_1_1E8D2BC1EF83C1D7_METHOD_1_7CF8E015B7C82EAA_OFFSET))(this, a1, a2, a3);
	}

	::UnityEngine::Material* Method_1_D3E836A1A3C7BA75(::System::String* a1)
	{
		return ((::UnityEngine::Material*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_1E8D2BC1EF83C1D7_METHOD_1_D3E836A1A3C7BA75_OFFSET))(this, a1);
	}

	::UnityEngine::Texture2D* Method_1_4C2A407444543FB7(::System::String* a1)
	{
		return ((::UnityEngine::Texture2D*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_1E8D2BC1EF83C1D7_METHOD_1_4C2A407444543FB7_OFFSET))(this, a1);
	}

	::UnityEngine::Material* Method_1_4E462256C54788ED(::Foundation::AssetPath a1, ::UnityEngine::Material* a2)
	{
		return ((::UnityEngine::Material*(*)(::PVOID, ::Foundation::AssetPath, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + CLASS_1_1E8D2BC1EF83C1D7_METHOD_1_4E462256C54788ED_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_E3FAE0F50618D019(::UnityEngine::UI::Image* a1, ::System::String* a2, ::System::Action_1<::System::Boolean>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Image*, ::System::String*, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_1_1E8D2BC1EF83C1D7_METHOD_1_E3FAE0F50618D019_OFFSET))(this, a1, a2, a3);
	}

	::UnityEngine::Texture2D* Method_1_19A243F71AC9569D(::System::String* a1, ::Foundation::AssetRequestHandle& a2)
	{
		return ((::UnityEngine::Texture2D*(*)(::PVOID, ::System::String*, ::Foundation::AssetRequestHandle&))((::PBYTE)hIl2Cpp + CLASS_1_1E8D2BC1EF83C1D7_METHOD_1_19A243F71AC9569D_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Sprite* Method_1_A3547BABB06EC35A(::UnityEngine::UI::Image* a1, ::Foundation::AssetPath a2, ::System::Boolean a3, ::System::Boolean a4)
	{
		return ((::UnityEngine::Sprite*(*)(::PVOID, ::UnityEngine::UI::Image*, ::Foundation::AssetPath, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_1E8D2BC1EF83C1D7_METHOD_1_A3547BABB06EC35A_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_4B76CED1EE263E14(::UnityEngine::UI::Image* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Image*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_1E8D2BC1EF83C1D7_METHOD_1_4B76CED1EE263E14_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_1289C76924B12EAF(::Foundation::AssetRequestHandle a1)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AssetRequestHandle))((::PBYTE)hIl2Cpp + CLASS_1_1E8D2BC1EF83C1D7_METHOD_1_1289C76924B12EAF_OFFSET))(this, a1);
	}

	::System::Void Method_1_A9DAF3FE2888211B(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_1E8D2BC1EF83C1D7_METHOD_1_A9DAF3FE2888211B_OFFSET))(this, a1);
	}

	::System::Void Method_1_59190FAA997CC23F(::UnityEngine::Transform* a1, ::Foundation::AssetPath a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + CLASS_1_1E8D2BC1EF83C1D7_METHOD_1_59190FAA997CC23F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_2C38C45A06C4F43E(::UnityEngine::UI::Image* a1, ::System::String* a2, ::System::Action_1<::Foundation::AssetRequestHandle>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Image*, ::System::String*, ::System::Action_1<::Foundation::AssetRequestHandle>*))((::PBYTE)hIl2Cpp + CLASS_1_1E8D2BC1EF83C1D7_METHOD_1_2C38C45A06C4F43E_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_C1D1279A0E6E9CBF(::UnityEngine::UI::Image* a1, ::Foundation::AssetPath a2, ::Foundation::AssetRequestHandle& a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Image*, ::Foundation::AssetPath, ::Foundation::AssetRequestHandle&))((::PBYTE)hIl2Cpp + CLASS_1_1E8D2BC1EF83C1D7_METHOD_1_C1D1279A0E6E9CBF_OFFSET))(this, a1, a2, a3);
	}

	::Foundation::AssetRequestHandle Method_1_871FC9C75EE72A2C(::System::String* a1, ::System::Action_1<::Foundation::AssetRequestHandle>* a2)
	{
		return ((::Foundation::AssetRequestHandle(*)(::PVOID, ::System::String*, ::System::Action_1<::Foundation::AssetRequestHandle>*))((::PBYTE)hIl2Cpp + CLASS_1_1E8D2BC1EF83C1D7_METHOD_1_871FC9C75EE72A2C_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Texture2D* Method_1_3368A955600D49B7(::Foundation::AssetPath a1)
	{
		return ((::UnityEngine::Texture2D*(*)(::PVOID, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + CLASS_1_1E8D2BC1EF83C1D7_METHOD_1_3368A955600D49B7_OFFSET))(this, a1);
	}

	::System::Void Method_1_970D9BBAEECEBF3E(::UnityEngine::UI::Image* a1, ::Foundation::AssetPath a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Image*, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + CLASS_1_1E8D2BC1EF83C1D7_METHOD_1_970D9BBAEECEBF3E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_49B12F8094E117D0(::UnityEngine::Transform* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_1E8D2BC1EF83C1D7_METHOD_1_49B12F8094E117D0_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_906E868759828A7F(::UnityEngine::UI::Image* a1, ::System::String* a2, ::Foundation::AssetRequestHandle& a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Image*, ::System::String*, ::Foundation::AssetRequestHandle&))((::PBYTE)hIl2Cpp + CLASS_1_1E8D2BC1EF83C1D7_METHOD_1_906E868759828A7F_OFFSET))(this, a1, a2, a3);
	}

	::UnityEngine::Sprite* Method_1_17FA0422991FF5E1(::Foundation::AssetPath a1, ::Foundation::AssetRequestHandle& a2)
	{
		return ((::UnityEngine::Sprite*(*)(::PVOID, ::Foundation::AssetPath, ::Foundation::AssetRequestHandle&))((::PBYTE)hIl2Cpp + CLASS_1_1E8D2BC1EF83C1D7_METHOD_1_17FA0422991FF5E1_OFFSET))(this, a1, a2);
	}
};
