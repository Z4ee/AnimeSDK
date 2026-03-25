#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Object.h"

class Class_1_F8634184B38ED7F3;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class Transform; }

#define CLASS_1_0A73DAD4E99021B2_METHOD_1_0696DCA26B35BB36_OFFSET UNITYSDK_OFFSET(0x114DEF90)
#define CLASS_1_0A73DAD4E99021B2_METHOD_1_92E70BF14C1F70A4_OFFSET UNITYSDK_OFFSET(0x114DEC70)
#define CLASS_1_0A73DAD4E99021B2__CCTOR_OFFSET UNITYSDK_OFFSET(0x114DF2E0)
#define CLASS_1_0A73DAD4E99021B2__CTOR_OFFSET UNITYSDK_OFFSET(0x114DF290)

inline static constexpr unsigned int Class_1_0A73DAD4E99021B2_TypeDefinitionIndex = 46041;

class Class_1_0A73DAD4E99021B2 : public ::System::Object
{
public:
	static ::RPG::MVector3* StaticGet_Field_1_0()
	{
		return (::RPG::MVector3*)Il2CppClass::FromTypeDefinitionIndex(Class_1_0A73DAD4E99021B2_TypeDefinitionIndex)->GetStaticField(0x11100);
	}
	// static const ::System::Single Field_1_2; // 0x0
	::System::Collections::Generic::List_1<::Class_1_F8634184B38ED7F3*>* Field_1_1; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A73DAD4E99021B2__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_0A73DAD4E99021B2__CCTOR_OFFSET))();
	}

	::System::Void Method_1_92E70BF14C1F70A4(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_0A73DAD4E99021B2_METHOD_1_92E70BF14C1F70A4_OFFSET))(this, a1);
	}

	::System::Void Method_1_0696DCA26B35BB36(::UnityEngine::Object* a1, ::UnityEngine::Transform* a2, ::System::String* a3, ::UnityEngine::GameObject* a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*, ::UnityEngine::Transform*, ::System::String*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_0A73DAD4E99021B2_METHOD_1_0696DCA26B35BB36_OFFSET))(this, a1, a2, a3, a4);
	}
};
