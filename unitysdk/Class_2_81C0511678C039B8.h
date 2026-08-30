#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"

namespace RPG::Client { class SceneTV; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_81C0511678C039B8_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A7DE580)
#define CLASS_2_81C0511678C039B8_METHOD_2_BEAEA4AE248F74C2_OFFSET UNITYSDK_OFFSET(0x1A7DE710)
#define CLASS_2_81C0511678C039B8_METHOD_2_F7300E87EC49A206_OFFSET UNITYSDK_OFFSET(0x1A7DE320)
#define CLASS_2_81C0511678C039B8__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7DE2A0)

inline static constexpr unsigned int Class_2_81C0511678C039B8_TypeDefinitionIndex = 57517;

class Class_2_81C0511678C039B8 : public ::RPG::GameCore::GameComponentBase
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::Client::SceneTV*>* KOHPIBKEHBL; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_81C0511678C039B8__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_F7300E87EC49A206()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_81C0511678C039B8_METHOD_2_F7300E87EC49A206_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_81C0511678C039B8_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_BEAEA4AE248F74C2(::System::Int32 a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_81C0511678C039B8_METHOD_2_BEAEA4AE248F74C2_OFFSET))(this, a1, a2);
	}
};
