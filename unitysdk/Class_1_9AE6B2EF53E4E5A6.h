#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class LevelGlobalCounterstrokeConfig; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_9AE6B2EF53E4E5A6_METHOD_1_0EE9A816A5FD11C4_OFFSET UNITYSDK_OFFSET(0x11755F00)
#define CLASS_1_9AE6B2EF53E4E5A6_METHOD_1_8D1A65C30E6983C1_OFFSET UNITYSDK_OFFSET(0x11755E10)
#define CLASS_1_9AE6B2EF53E4E5A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x11755E00)

inline static constexpr unsigned int Class_1_9AE6B2EF53E4E5A6_TypeDefinitionIndex = 44447;

class Class_1_9AE6B2EF53E4E5A6 : public ::System::Object
{
public:
	static ::MoleMole::Config::LevelGlobalCounterstrokeConfig** StaticGet_Field_1_0()
	{
		return (::MoleMole::Config::LevelGlobalCounterstrokeConfig**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9AE6B2EF53E4E5A6_TypeDefinitionIndex)->GetStaticField(0x330B0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_9AE6B2EF53E4E5A6__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_8D1A65C30E6983C1(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_9AE6B2EF53E4E5A6_METHOD_1_8D1A65C30E6983C1_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_0EE9A816A5FD11C4(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_9AE6B2EF53E4E5A6_METHOD_1_0EE9A816A5FD11C4_OFFSET))(a1, a2);
	}
};
