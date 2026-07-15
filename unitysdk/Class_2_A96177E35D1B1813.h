#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/RPG/GameCore/GridFightOrbType.h"
#include "unitysdk/Struct_2_34C03801479AC814.h"

class Class_2_38034A0ABCA9E37F;
class Class_2_A8886CB1373AE575;
class Class_2_DBF482F9F6F56036;
namespace RPG::Client { class PrefabLoadMeta; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }

#define CLASS_2_A96177E35D1B1813_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x16375C60)
#define CLASS_2_A96177E35D1B1813_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x16375DA0)
#define CLASS_2_A96177E35D1B1813_METHOD_2_2F3FBB2E55AB1872_OFFSET UNITYSDK_OFFSET(0x163750E0)
#define CLASS_2_A96177E35D1B1813_METHOD_2_364E91940C737CC9_OFFSET UNITYSDK_OFFSET(0x163742F0)
#define CLASS_2_A96177E35D1B1813_METHOD_2_36F46336ADA62D13_OFFSET UNITYSDK_OFFSET(0x16374290)
#define CLASS_2_A96177E35D1B1813_METHOD_2_40D4B7BE16D185D0_OFFSET UNITYSDK_OFFSET(0x16375630)
#define CLASS_2_A96177E35D1B1813_METHOD_2_AAD864A9DF964170_OFFSET UNITYSDK_OFFSET(0x16374640)
#define CLASS_2_A96177E35D1B1813_METHOD_2_B29205EE7F7B640C_OFFSET UNITYSDK_OFFSET(0x163749E0)
#define CLASS_2_A96177E35D1B1813_METHOD_2_C450A961450309C9_OFFSET UNITYSDK_OFFSET(0x16375B70)
#define CLASS_2_A96177E35D1B1813_METHOD_2_CB31C267907A2689_OFFSET UNITYSDK_OFFSET(0x163753D0)
#define CLASS_2_A96177E35D1B1813_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0x16375AE0)
#define CLASS_2_A96177E35D1B1813_METHOD_2_FE73875B305F4515_OFFSET UNITYSDK_OFFSET(0x16375240)
#define CLASS_2_A96177E35D1B1813__CTOR_OFFSET UNITYSDK_OFFSET(0x16375EC0)
#define CLASS_2_A96177E35D1B1813__ONBIND_OFFSET UNITYSDK_OFFSET(0x16373EA0)

inline static constexpr unsigned int Class_2_A96177E35D1B1813_TypeDefinitionIndex = 69011;

class Class_2_A96177E35D1B1813 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	::RPG::Client::PrefabLoadMeta* Field_2_0; // 0x60
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GridFightOrbType, ::System::UInt32>* Field_2_1; // 0x68
	::UnityEngine::UI::Image* Field_2_2; // 0x70
	::UnityEngine::UI::Image* Field_2_3; // 0x78
	::UnityEngine::RectTransform* Field_2_4; // 0x80
	::Class_2_A8886CB1373AE575* Field_2_5; // 0x88
	::UnityEngine::UI::Image* Field_2_6; // 0x90
	::UnityEngine::UI::Text* Field_2_7; // 0x98
	::System::Collections::Generic::List_1<::Class_2_DBF482F9F6F56036*>* Field_2_8; // 0xA0
	::UnityEngine::UI::Text* Field_2_9; // 0xA8
	::Class_2_38034A0ABCA9E37F* Field_2_10; // 0xB0
	::UnityEngine::Transform* Field_2_11; // 0xB8
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GridFightOrbType, ::System::UInt32>* Field_2_12; // 0xC0
	::System::Int32 Field_2_13; // 0xC8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A96177E35D1B1813__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A96177E35D1B1813__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_36F46336ADA62D13()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A96177E35D1B1813_METHOD_2_36F46336ADA62D13_OFFSET))(this);
	}

	::System::Void Method_2_364E91940C737CC9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A96177E35D1B1813_METHOD_2_364E91940C737CC9_OFFSET))(this);
	}

	::System::Void Method_2_AAD864A9DF964170()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A96177E35D1B1813_METHOD_2_AAD864A9DF964170_OFFSET))(this);
	}

	::System::Void Method_2_B29205EE7F7B640C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A96177E35D1B1813_METHOD_2_B29205EE7F7B640C_OFFSET))(this);
	}

	::System::Void Method_2_FE73875B305F4515(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_A96177E35D1B1813_METHOD_2_FE73875B305F4515_OFFSET))(this, a1);
	}

	::System::Void Method_2_CB31C267907A2689(::System::Collections::Generic::List_1<::Struct_2_34C03801479AC814>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Struct_2_34C03801479AC814>*))((::PBYTE)hIl2Cpp + CLASS_2_A96177E35D1B1813_METHOD_2_CB31C267907A2689_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_40D4B7BE16D185D0(::System::Collections::Generic::List_1<::Struct_2_34C03801479AC814>* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::Struct_2_34C03801479AC814>*))((::PBYTE)hIl2Cpp + CLASS_2_A96177E35D1B1813_METHOD_2_40D4B7BE16D185D0_OFFSET))(this, a1);
	}

	::Class_2_DBF482F9F6F56036* Method_2_2F3FBB2E55AB1872(::RPG::GameCore::GridFightOrbType a1)
	{
		return ((::Class_2_DBF482F9F6F56036*(*)(::PVOID, ::RPG::GameCore::GridFightOrbType))((::PBYTE)hIl2Cpp + CLASS_2_A96177E35D1B1813_METHOD_2_2F3FBB2E55AB1872_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_A96177E35D1B1813_METHOD_2_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Void Method_2_C450A961450309C9(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_A96177E35D1B1813_METHOD_2_C450A961450309C9_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A96177E35D1B1813_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A96177E35D1B1813_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
