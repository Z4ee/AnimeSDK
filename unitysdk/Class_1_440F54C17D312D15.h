#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_7DAF438717237C6B.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntityList; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_440F54C17D312D15_METHOD_1_5530BE01F57BBD43_OFFSET UNITYSDK_OFFSET(0xB725A00)
#define CLASS_1_440F54C17D312D15_METHOD_1_8F1DEE03EB95CFBC_OFFSET UNITYSDK_OFFSET(0xB725920)
#define CLASS_1_440F54C17D312D15_METHOD_1_C042B8AAF20F182C_OFFSET UNITYSDK_OFFSET(0xB725550)
#define CLASS_1_440F54C17D312D15_METHOD_1_FA3D6E45984D6807_OFFSET UNITYSDK_OFFSET(0xB725C30)
#define CLASS_1_440F54C17D312D15__CTOR_OFFSET UNITYSDK_OFFSET(0xB725CC0)

inline static constexpr unsigned int Class_1_440F54C17D312D15_TypeDefinitionIndex = 54443;

class Class_1_440F54C17D312D15 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::Struct_2_7DAF438717237C6B>*>* HPKCEIDAPBN; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_440F54C17D312D15__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_C042B8AAF20F182C(::System::String* a1, ::RPG::GameCore::GameEntityList* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::GameCore::GameEntityList*))((::PBYTE)hIl2Cpp + CLASS_1_440F54C17D312D15_METHOD_1_C042B8AAF20F182C_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_8F1DEE03EB95CFBC(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_440F54C17D312D15_METHOD_1_8F1DEE03EB95CFBC_OFFSET))(this, a1);
	}

	::System::Void Method_1_FA3D6E45984D6807(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_440F54C17D312D15_METHOD_1_FA3D6E45984D6807_OFFSET))(this, a1);
	}

	static ::System::Void Method_1_5530BE01F57BBD43(::System::Collections::Generic::List_1<::Struct_2_7DAF438717237C6B>* a1)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::Struct_2_7DAF438717237C6B>*))((::PBYTE)hIl2Cpp + CLASS_1_440F54C17D312D15_METHOD_1_5530BE01F57BBD43_OFFSET))(a1);
	}
};
