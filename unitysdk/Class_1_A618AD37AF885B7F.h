#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EntityType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_D42443398E3AD863_1;
namespace RPG::Client { class TimeRewindAnimRaycastBind; }
namespace RPG::Client { class TimeRewindRaycast; }
namespace RPG::Client { class TimeRewindRaycastInfo; }
namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }
namespace UnityEngine { class Collider; }

#define CLASS_1_A618AD37AF885B7F_DISPOSE_OFFSET UNITYSDK_OFFSET(0x92817C0)
#define CLASS_1_A618AD37AF885B7F_METHOD_1_A1781348F0A89177_OFFSET UNITYSDK_OFFSET(0x92819C0)
#define CLASS_1_A618AD37AF885B7F_METHOD_1_A2D9F178DD3E14C3_OFFSET UNITYSDK_OFFSET(0x9281CC0)
#define CLASS_1_A618AD37AF885B7F_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x9281970)
#define CLASS_1_A618AD37AF885B7F_METHOD_1_CC6ED9DAA0821769_OFFSET UNITYSDK_OFFSET(0x92827F0)
#define CLASS_1_A618AD37AF885B7F_METHOD_1_E14A7FCF78650419_OFFSET UNITYSDK_OFFSET(0x9282760)
#define CLASS_1_A618AD37AF885B7F_METHOD_1_E44C4B1878F85417_OFFSET UNITYSDK_OFFSET(0x9281900)
#define CLASS_1_A618AD37AF885B7F_METHOD_1_E7EF6BC52B28648C_OFFSET UNITYSDK_OFFSET(0x9281BE0)
#define CLASS_1_A618AD37AF885B7F_METHOD_1_EC7DC7FA5B23736B_OFFSET UNITYSDK_OFFSET(0x9282930)
#define CLASS_1_A618AD37AF885B7F__CCTOR_OFFSET UNITYSDK_OFFSET(0x92829E0)
#define CLASS_1_A618AD37AF885B7F__CTOR_OFFSET UNITYSDK_OFFSET(0x9281550)

inline static constexpr unsigned int Class_1_A618AD37AF885B7F_TypeDefinitionIndex = 56098;

class Class_1_A618AD37AF885B7F : public ::System::Object
{
public:
	static ::Il2CppArray<::RPG::GameCore::EntityType>** StaticGet_Field_1_10()
	{
		return (::Il2CppArray<::RPG::GameCore::EntityType>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A618AD37AF885B7F_TypeDefinitionIndex)->GetStaticField(0x6A570);
	}
	::System::Collections::Generic::Stack_1<::Class_1_D42443398E3AD863_1*>* Field_1_1; // 0x10
	::System::Collections::Generic::List_1<::Class_1_D42443398E3AD863_1*>* Field_1_0; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::Client::TimeRewindAnimRaycastBind*>* Field_1_5; // 0x20
	::RPG::GameCore::GameEntity* Field_1_2; // 0x28
	::Il2CppArray<::UnityEngine::Collider*>* Field_1_4; // 0x30
	::RPG::Client::TimeRewindRaycast* Field_1_3; // 0x38
	::System::Int32 Field_1_7; // 0x40
	::System::Boolean Field_1_9; // 0x44
	::System::Int32 Field_1_6; // 0x48
	::System::Single Field_1_8; // 0x4C

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::RPG::Client::TimeRewindRaycast* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::Client::TimeRewindRaycast*))((::PBYTE)hIl2Cpp + CLASS_1_A618AD37AF885B7F__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A618AD37AF885B7F__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A618AD37AF885B7F_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_E44C4B1878F85417(::System::Int32 a1, ::System::Int32 a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_A618AD37AF885B7F_METHOD_1_E44C4B1878F85417_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A618AD37AF885B7F_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_A1781348F0A89177()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A618AD37AF885B7F_METHOD_1_A1781348F0A89177_OFFSET))(this);
	}

	::System::Void Method_1_A2D9F178DD3E14C3(::Il2CppArray<::RPG::Client::TimeRewindRaycastInfo*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::Client::TimeRewindRaycastInfo*>*))((::PBYTE)hIl2Cpp + CLASS_1_A618AD37AF885B7F_METHOD_1_A2D9F178DD3E14C3_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_1_CC6ED9DAA0821769(::UnityEngine::Collider* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Collider*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_A618AD37AF885B7F_METHOD_1_CC6ED9DAA0821769_OFFSET))(this, a1, a2);
	}

	::Class_1_D42443398E3AD863_1* Method_1_E14A7FCF78650419()
	{
		return ((::Class_1_D42443398E3AD863_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A618AD37AF885B7F_METHOD_1_E14A7FCF78650419_OFFSET))(this);
	}

	::System::Void Method_1_EC7DC7FA5B23736B(::Class_1_D42443398E3AD863_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D42443398E3AD863_1*))((::PBYTE)hIl2Cpp + CLASS_1_A618AD37AF885B7F_METHOD_1_EC7DC7FA5B23736B_OFFSET))(this, a1);
	}

	::System::Void Method_1_E7EF6BC52B28648C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A618AD37AF885B7F_METHOD_1_E7EF6BC52B28648C_OFFSET))(this);
	}
};
