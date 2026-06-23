#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/MoleMole/HollowPieceRepresentType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

class Class_1_1B319070EAD6DC38;
class Class_1_E9529ED64113E4E9;
class Class_2_62DF67754B2A7986;
namespace MoleMole { class IVideoPlayer; }
namespace MoleMole::Config { class ConfigHollowChessboard; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Texture; }
namespace UnityEngine { class Transform; }

#define CLASS_1_47DC99B26C6271DB_DISPOSE_OFFSET UNITYSDK_OFFSET(0x126A2730)
#define CLASS_1_47DC99B26C6271DB_METHOD_1_0AE4B11CEAF7377F_1_OFFSET UNITYSDK_OFFSET(0x126A3B00)
#define CLASS_1_47DC99B26C6271DB_METHOD_1_0AE4B11CEAF7377F_OFFSET UNITYSDK_OFFSET(0x126A30C0)
#define CLASS_1_47DC99B26C6271DB_METHOD_1_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x126A3960)
#define CLASS_1_47DC99B26C6271DB_METHOD_1_350FBFEA29F2BE5A_OFFSET UNITYSDK_OFFSET(0x126A3250)
#define CLASS_1_47DC99B26C6271DB_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x126A36F0)
#define CLASS_1_47DC99B26C6271DB_METHOD_1_44D54B0829C8FEF6_OFFSET UNITYSDK_OFFSET(0x126A3640)
#define CLASS_1_47DC99B26C6271DB_METHOD_1_48F610A66D8B35EB_OFFSET UNITYSDK_OFFSET(0x126A38D0)
#define CLASS_1_47DC99B26C6271DB_METHOD_1_6B5712A69C8DDBA9_OFFSET UNITYSDK_OFFSET(0x126A2970)
#define CLASS_1_47DC99B26C6271DB_METHOD_1_95780ED94B90ED36_1_OFFSET UNITYSDK_OFFSET(0x126A3AB0)
#define CLASS_1_47DC99B26C6271DB_METHOD_1_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x126A3590)
#define CLASS_1_47DC99B26C6271DB_METHOD_1_A4766B4D9580B815_OFFSET UNITYSDK_OFFSET(0x126A3CB0)
#define CLASS_1_47DC99B26C6271DB_METHOD_1_B55D7E2BB2F57B59_OFFSET UNITYSDK_OFFSET(0x126A3A40)
#define CLASS_1_47DC99B26C6271DB_METHOD_1_C26A52FC112F9826_OFFSET UNITYSDK_OFFSET(0x126A3010)
#define CLASS_1_47DC99B26C6271DB_METHOD_1_E6A710A1024A7937_OFFSET UNITYSDK_OFFSET(0x126A3310)
#define CLASS_1_47DC99B26C6271DB_METHOD_1_EB754F983527AB71_OFFSET UNITYSDK_OFFSET(0x126A3750)
#define CLASS_1_47DC99B26C6271DB_METHOD_1_F0E307B84478A272_1_OFFSET UNITYSDK_OFFSET(0x126A3A10)
#define CLASS_1_47DC99B26C6271DB_METHOD_1_F0E307B84478A272_2_OFFSET UNITYSDK_OFFSET(0x126A39E0)
#define CLASS_1_47DC99B26C6271DB_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x126A32E0)
#define CLASS_1_47DC99B26C6271DB_METHOD_1_F60227B7A362674E_OFFSET UNITYSDK_OFFSET(0x126A35E0)
#define CLASS_1_47DC99B26C6271DB__CCTOR_OFFSET UNITYSDK_OFFSET(0x126A30A0)
#define CLASS_1_47DC99B26C6271DB__CTOR_OFFSET UNITYSDK_OFFSET(0x126A2B20)

inline static constexpr unsigned int Class_1_47DC99B26C6271DB_TypeDefinitionIndex = 63130;

class Class_1_47DC99B26C6271DB : public ::System::Object
{
public:
	static ::UnityEngine::Vector3* StaticGet_Field_1_1()
	{
		return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(Class_1_47DC99B26C6271DB_TypeDefinitionIndex)->GetStaticField(0xE8F0);
	}
	static ::UnityEngine::Vector3* StaticGet_Field_1_0()
	{
		return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(Class_1_47DC99B26C6271DB_TypeDefinitionIndex)->GetStaticField(0xE8FC);
	}
	::MoleMole::Config::ConfigHollowChessboard* Field_1_6; // 0x10
	::System::Action* Field_1_4; // 0x18
	::System::Action_2<::UnityEngine::Texture*, ::System::Int32>* Field_1_2; // 0x20
	::Class_2_62DF67754B2A7986* Field_1_12; // 0x28
	::Class_1_E9529ED64113E4E9* Field_1_10; // 0x30
	::System::Action_2<::UnityEngine::Texture*, ::System::Int32>* Field_1_3; // 0x38
	::System::String* Field_1_5; // 0x40
	::Class_1_1B319070EAD6DC38* Field_1_11; // 0x48
	::MoleMole::IVideoPlayer* Field_1_8; // 0x50
	::UnityEngine::Material* Field_1_9; // 0x58
	::UnityEngine::Transform* Field_1_7; // 0x60

	::System::Void _ctor(::MoleMole::HollowPieceRepresentType a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowPieceRepresentType))((::PBYTE)hIl2Cpp + CLASS_1_47DC99B26C6271DB__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_47DC99B26C6271DB__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_47DC99B26C6271DB_DISPOSE_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask Method_1_0AE4B11CEAF7377F(::System::String* a1, ::System::Boolean a2, ::System::Action_1<::Class_1_E9529ED64113E4E9*>* a3, ::System::Action_1<::Class_1_E9529ED64113E4E9*>* a4, ::System::Action_1<::Class_1_E9529ED64113E4E9*>* a5, ::System::Action* a6, ::System::Threading::CancellationToken a7, ::System::Action_2<::UnityEngine::Texture*, ::System::Int32>* a8, ::System::Action_2<::UnityEngine::Texture*, ::System::Int32>* a9)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Action_1<::Class_1_E9529ED64113E4E9*>*, ::System::Action_1<::Class_1_E9529ED64113E4E9*>*, ::System::Action_1<::Class_1_E9529ED64113E4E9*>*, ::System::Action*, ::System::Threading::CancellationToken, ::System::Action_2<::UnityEngine::Texture*, ::System::Int32>*, ::System::Action_2<::UnityEngine::Texture*, ::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_47DC99B26C6271DB_METHOD_1_0AE4B11CEAF7377F_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
	}

	::UnityEngine::Vector4 Method_1_350FBFEA29F2BE5A()
	{
		return ((::UnityEngine::Vector4(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_47DC99B26C6271DB_METHOD_1_350FBFEA29F2BE5A_OFFSET))(this);
	}

	::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_47DC99B26C6271DB_METHOD_1_F0E307B84478A272_OFFSET))(this);
	}

	::System::Void Method_1_E6A710A1024A7937(::MoleMole::IVideoPlayer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::IVideoPlayer*))((::PBYTE)hIl2Cpp + CLASS_1_47DC99B26C6271DB_METHOD_1_E6A710A1024A7937_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_47DC99B26C6271DB_METHOD_1_95780ED94B90ED36_OFFSET))(this);
	}

	::System::Void Method_1_F60227B7A362674E(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_47DC99B26C6271DB_METHOD_1_F60227B7A362674E_OFFSET))(this, a1);
	}

	::System::Void Method_1_6B5712A69C8DDBA9(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_47DC99B26C6271DB_METHOD_1_6B5712A69C8DDBA9_OFFSET))(this, a1);
	}

	::System::Void Method_1_44D54B0829C8FEF6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_47DC99B26C6271DB_METHOD_1_44D54B0829C8FEF6_OFFSET))(this);
	}

	::System::Void Method_1_48F610A66D8B35EB(::MoleMole::IVideoPlayer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::IVideoPlayer*))((::PBYTE)hIl2Cpp + CLASS_1_47DC99B26C6271DB_METHOD_1_48F610A66D8B35EB_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_47DC99B26C6271DB_METHOD_1_1808E1CF7A125519_OFFSET))(this);
	}

	::System::Boolean Method_1_F0E307B84478A272_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_47DC99B26C6271DB_METHOD_1_F0E307B84478A272_1_OFFSET))(this);
	}

	::System::Int64 Method_1_B55D7E2BB2F57B59()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_47DC99B26C6271DB_METHOD_1_B55D7E2BB2F57B59_OFFSET))(this);
	}

	::System::Int32 Method_1_95780ED94B90ED36_1()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_47DC99B26C6271DB_METHOD_1_95780ED94B90ED36_1_OFFSET))(this);
	}

	::UnityEngine::GameObject* Method_1_C26A52FC112F9826(::System::String* a1)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_47DC99B26C6271DB_METHOD_1_C26A52FC112F9826_OFFSET))(this, a1);
	}

	::Cysharp::Threading::Tasks::UniTask Method_1_0AE4B11CEAF7377F_1(::System::String* a1, ::System::Boolean a2, ::System::Action_1<::Class_1_E9529ED64113E4E9*>* a3, ::System::Action_1<::Class_1_E9529ED64113E4E9*>* a4, ::System::Action_1<::Class_1_E9529ED64113E4E9*>* a5, ::System::Action* a6, ::System::Threading::CancellationToken a7, ::System::Action_2<::UnityEngine::Texture*, ::System::Int32>* a8, ::System::Action_2<::UnityEngine::Texture*, ::System::Int32>* a9)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Action_1<::Class_1_E9529ED64113E4E9*>*, ::System::Action_1<::Class_1_E9529ED64113E4E9*>*, ::System::Action_1<::Class_1_E9529ED64113E4E9*>*, ::System::Action*, ::System::Threading::CancellationToken, ::System::Action_2<::UnityEngine::Texture*, ::System::Int32>*, ::System::Action_2<::UnityEngine::Texture*, ::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_47DC99B26C6271DB_METHOD_1_0AE4B11CEAF7377F_1_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
	}

	::System::Boolean Method_1_F0E307B84478A272_2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_47DC99B26C6271DB_METHOD_1_F0E307B84478A272_2_OFFSET))(this);
	}

	::System::Void Method_1_EB754F983527AB71(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_47DC99B26C6271DB_METHOD_1_EB754F983527AB71_OFFSET))(this, a1);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_47DC99B26C6271DB_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_A4766B4D9580B815(::System::Action_2<::UnityEngine::Texture*, ::System::Int32>* a1, ::System::Action_2<::UnityEngine::Texture*, ::System::Int32>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_2<::UnityEngine::Texture*, ::System::Int32>*, ::System::Action_2<::UnityEngine::Texture*, ::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_47DC99B26C6271DB_METHOD_1_A4766B4D9580B815_OFFSET))(this, a1, a2);
	}
};
