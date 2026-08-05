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

#define CLASS_1_47DC99B26C6271DB_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A664770)
#define CLASS_1_47DC99B26C6271DB_METHOD_1_0AE4B11CEAF7377F_1_OFFSET UNITYSDK_OFFSET(0x1A665A20)
#define CLASS_1_47DC99B26C6271DB_METHOD_1_0AE4B11CEAF7377F_OFFSET UNITYSDK_OFFSET(0x1A665550)
#define CLASS_1_47DC99B26C6271DB_METHOD_1_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x1A665190)
#define CLASS_1_47DC99B26C6271DB_METHOD_1_350FBFEA29F2BE5A_OFFSET UNITYSDK_OFFSET(0x1A665990)
#define CLASS_1_47DC99B26C6271DB_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x1A6658E0)
#define CLASS_1_47DC99B26C6271DB_METHOD_1_44D54B0829C8FEF6_OFFSET UNITYSDK_OFFSET(0x1A665BD0)
#define CLASS_1_47DC99B26C6271DB_METHOD_1_48F610A66D8B35EB_OFFSET UNITYSDK_OFFSET(0x1A665D60)
#define CLASS_1_47DC99B26C6271DB_METHOD_1_6B5712A69C8DDBA9_OFFSET UNITYSDK_OFFSET(0x1A6649B0)
#define CLASS_1_47DC99B26C6271DB_METHOD_1_95780ED94B90ED36_1_OFFSET UNITYSDK_OFFSET(0x1A665C80)
#define CLASS_1_47DC99B26C6271DB_METHOD_1_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x1A665940)
#define CLASS_1_47DC99B26C6271DB_METHOD_1_A4766B4D9580B815_OFFSET UNITYSDK_OFFSET(0x1A665CD0)
#define CLASS_1_47DC99B26C6271DB_METHOD_1_B55D7E2BB2F57B59_OFFSET UNITYSDK_OFFSET(0x1A6656F0)
#define CLASS_1_47DC99B26C6271DB_METHOD_1_C26A52FC112F9826_OFFSET UNITYSDK_OFFSET(0x1A6650E0)
#define CLASS_1_47DC99B26C6271DB_METHOD_1_E6A710A1024A7937_OFFSET UNITYSDK_OFFSET(0x1A6652D0)
#define CLASS_1_47DC99B26C6271DB_METHOD_1_EB754F983527AB71_OFFSET UNITYSDK_OFFSET(0x1A665760)
#define CLASS_1_47DC99B26C6271DB_METHOD_1_F0E307B84478A272_1_OFFSET UNITYSDK_OFFSET(0x1A665240)
#define CLASS_1_47DC99B26C6271DB_METHOD_1_F0E307B84478A272_2_OFFSET UNITYSDK_OFFSET(0x1A665D30)
#define CLASS_1_47DC99B26C6271DB_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1A665210)
#define CLASS_1_47DC99B26C6271DB_METHOD_1_F60227B7A362674E_OFFSET UNITYSDK_OFFSET(0x1A665270)
#define CLASS_1_47DC99B26C6271DB__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A665170)
#define CLASS_1_47DC99B26C6271DB__CTOR_OFFSET UNITYSDK_OFFSET(0x1A664B60)

inline static constexpr unsigned int Class_1_47DC99B26C6271DB_TypeDefinitionIndex = 67822;

class Class_1_47DC99B26C6271DB : public ::System::Object
{
public:
	static ::UnityEngine::Vector3* StaticGet_Field_1_2()
	{
		return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(Class_1_47DC99B26C6271DB_TypeDefinitionIndex)->GetStaticField(0xC130);
	}
	static ::UnityEngine::Vector3* StaticGet_Field_1_3()
	{
		return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(Class_1_47DC99B26C6271DB_TypeDefinitionIndex)->GetStaticField(0xC13C);
	}
	::UnityEngine::Transform* Field_1_4; // 0x10
	::UnityEngine::Material* Field_1_10; // 0x18
	::System::Action* Field_1_7; // 0x20
	::MoleMole::IVideoPlayer* Field_1_11; // 0x28
	::Class_1_E9529ED64113E4E9* Field_1_9; // 0x30
	::Class_1_1B319070EAD6DC38* Field_1_8; // 0x38
	::System::String* Field_1_6; // 0x40
	::System::Action_2<::UnityEngine::Texture*, ::System::Int32>* Field_1_0; // 0x48
	::MoleMole::Config::ConfigHollowChessboard* Field_1_5; // 0x50
	::System::Action_2<::UnityEngine::Texture*, ::System::Int32>* Field_1_1; // 0x58
	::Class_2_62DF67754B2A7986* Field_1_15; // 0x60

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

	::System::Boolean Method_1_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_47DC99B26C6271DB_METHOD_1_1808E1CF7A125519_OFFSET))(this);
	}

	::System::Void Method_1_F60227B7A362674E(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_47DC99B26C6271DB_METHOD_1_F60227B7A362674E_OFFSET))(this, a1);
	}

	::System::Void Method_1_E6A710A1024A7937(::MoleMole::IVideoPlayer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::IVideoPlayer*))((::PBYTE)hIl2Cpp + CLASS_1_47DC99B26C6271DB_METHOD_1_E6A710A1024A7937_OFFSET))(this, a1);
	}

	::Cysharp::Threading::Tasks::UniTask Method_1_0AE4B11CEAF7377F(::System::String* a1, ::System::Boolean a2, ::System::Action_1<::Class_1_E9529ED64113E4E9*>* a3, ::System::Action_1<::Class_1_E9529ED64113E4E9*>* a4, ::System::Action_1<::Class_1_E9529ED64113E4E9*>* a5, ::System::Action* a6, ::System::Threading::CancellationToken a7, ::System::Action_2<::UnityEngine::Texture*, ::System::Int32>* a8, ::System::Action_2<::UnityEngine::Texture*, ::System::Int32>* a9)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Action_1<::Class_1_E9529ED64113E4E9*>*, ::System::Action_1<::Class_1_E9529ED64113E4E9*>*, ::System::Action_1<::Class_1_E9529ED64113E4E9*>*, ::System::Action*, ::System::Threading::CancellationToken, ::System::Action_2<::UnityEngine::Texture*, ::System::Int32>*, ::System::Action_2<::UnityEngine::Texture*, ::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_47DC99B26C6271DB_METHOD_1_0AE4B11CEAF7377F_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
	}

	::System::Int64 Method_1_B55D7E2BB2F57B59()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_47DC99B26C6271DB_METHOD_1_B55D7E2BB2F57B59_OFFSET))(this);
	}

	::System::Void Method_1_EB754F983527AB71(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_47DC99B26C6271DB_METHOD_1_EB754F983527AB71_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_47DC99B26C6271DB_METHOD_1_F0E307B84478A272_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_47DC99B26C6271DB_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Int32 Method_1_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_47DC99B26C6271DB_METHOD_1_95780ED94B90ED36_OFFSET))(this);
	}

	::UnityEngine::Vector4 Method_1_350FBFEA29F2BE5A()
	{
		return ((::UnityEngine::Vector4(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_47DC99B26C6271DB_METHOD_1_350FBFEA29F2BE5A_OFFSET))(this);
	}

	::UnityEngine::GameObject* Method_1_C26A52FC112F9826(::System::String* a1)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_47DC99B26C6271DB_METHOD_1_C26A52FC112F9826_OFFSET))(this, a1);
	}

	::Cysharp::Threading::Tasks::UniTask Method_1_0AE4B11CEAF7377F_1(::System::String* a1, ::System::Boolean a2, ::System::Action_1<::Class_1_E9529ED64113E4E9*>* a3, ::System::Action_1<::Class_1_E9529ED64113E4E9*>* a4, ::System::Action_1<::Class_1_E9529ED64113E4E9*>* a5, ::System::Action* a6, ::System::Threading::CancellationToken a7, ::System::Action_2<::UnityEngine::Texture*, ::System::Int32>* a8, ::System::Action_2<::UnityEngine::Texture*, ::System::Int32>* a9)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Action_1<::Class_1_E9529ED64113E4E9*>*, ::System::Action_1<::Class_1_E9529ED64113E4E9*>*, ::System::Action_1<::Class_1_E9529ED64113E4E9*>*, ::System::Action*, ::System::Threading::CancellationToken, ::System::Action_2<::UnityEngine::Texture*, ::System::Int32>*, ::System::Action_2<::UnityEngine::Texture*, ::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_47DC99B26C6271DB_METHOD_1_0AE4B11CEAF7377F_1_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
	}

	::System::Void Method_1_44D54B0829C8FEF6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_47DC99B26C6271DB_METHOD_1_44D54B0829C8FEF6_OFFSET))(this);
	}

	::System::Int32 Method_1_95780ED94B90ED36_1()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_47DC99B26C6271DB_METHOD_1_95780ED94B90ED36_1_OFFSET))(this);
	}

	::System::Boolean Method_1_F0E307B84478A272_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_47DC99B26C6271DB_METHOD_1_F0E307B84478A272_1_OFFSET))(this);
	}

	::System::Void Method_1_A4766B4D9580B815(::System::Action_2<::UnityEngine::Texture*, ::System::Int32>* a1, ::System::Action_2<::UnityEngine::Texture*, ::System::Int32>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_2<::UnityEngine::Texture*, ::System::Int32>*, ::System::Action_2<::UnityEngine::Texture*, ::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_47DC99B26C6271DB_METHOD_1_A4766B4D9580B815_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_F0E307B84478A272_2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_47DC99B26C6271DB_METHOD_1_F0E307B84478A272_2_OFFSET))(this);
	}

	::System::Void Method_1_6B5712A69C8DDBA9(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_47DC99B26C6271DB_METHOD_1_6B5712A69C8DDBA9_OFFSET))(this, a1);
	}

	::System::Void Method_1_48F610A66D8B35EB(::MoleMole::IVideoPlayer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::IVideoPlayer*))((::PBYTE)hIl2Cpp + CLASS_1_47DC99B26C6271DB_METHOD_1_48F610A66D8B35EB_OFFSET))(this, a1);
	}
};
