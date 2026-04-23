#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_7DAF438717237C6B.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntityList; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_C273ABF22E29C2B9_METHOD_1_4C2ACACD89F4EF1A_OFFSET UNITYSDK_OFFSET(0x11B37E60)
#define CLASS_1_C273ABF22E29C2B9_METHOD_1_82228B01DD3F48E2_OFFSET UNITYSDK_OFFSET(0x11B377F0)
#define CLASS_1_C273ABF22E29C2B9_METHOD_1_8F1DEE03EB95CFBC_OFFSET UNITYSDK_OFFSET(0x11B37B60)
#define CLASS_1_C273ABF22E29C2B9_METHOD_1_FD694DAC136F9FFA_OFFSET UNITYSDK_OFFSET(0x11B37C50)
#define CLASS_1_C273ABF22E29C2B9__CTOR_OFFSET UNITYSDK_OFFSET(0x11B37EF0)

inline static constexpr unsigned int Class_1_C273ABF22E29C2B9_TypeDefinitionIndex = 50010;

class Class_1_C273ABF22E29C2B9 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::Struct_2_7DAF438717237C6B>*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C273ABF22E29C2B9__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_82228B01DD3F48E2(::System::String* a1, ::RPG::GameCore::GameEntityList* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::GameCore::GameEntityList*))((::PBYTE)hIl2Cpp + CLASS_1_C273ABF22E29C2B9_METHOD_1_82228B01DD3F48E2_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_8F1DEE03EB95CFBC(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C273ABF22E29C2B9_METHOD_1_8F1DEE03EB95CFBC_OFFSET))(this, a1);
	}

	::System::Void Method_1_4C2ACACD89F4EF1A(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C273ABF22E29C2B9_METHOD_1_4C2ACACD89F4EF1A_OFFSET))(this, a1);
	}

	static ::System::Void Method_1_FD694DAC136F9FFA(::System::Collections::Generic::List_1<::Struct_2_7DAF438717237C6B>* a1)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::Struct_2_7DAF438717237C6B>*))((::PBYTE)hIl2Cpp + CLASS_1_C273ABF22E29C2B9_METHOD_1_FD694DAC136F9FFA_OFFSET))(a1);
	}
};
