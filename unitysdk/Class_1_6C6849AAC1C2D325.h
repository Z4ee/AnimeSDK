#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_494BD190B553B399;
class Class_1_563415D37D4EDE07;
namespace RPG::GameCore { class StagePrefabInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_6C6849AAC1C2D325_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x11196F50)
#define CLASS_1_6C6849AAC1C2D325_METHOD_1_DC7AE487B566916A_OFFSET UNITYSDK_OFFSET(0x11196CE0)
#define CLASS_1_6C6849AAC1C2D325__CCTOR_OFFSET UNITYSDK_OFFSET(0x11197070)
#define CLASS_1_6C6849AAC1C2D325__CTOR_OFFSET UNITYSDK_OFFSET(0x11196FF0)

inline static constexpr unsigned int Class_1_6C6849AAC1C2D325_TypeDefinitionIndex = 60462;

class Class_1_6C6849AAC1C2D325 : public ::System::Object
{
public:
	static ::System::Collections::Generic::HashSet_1<::System::String*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::HashSet_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6C6849AAC1C2D325_TypeDefinitionIndex)->GetStaticField(0x47010);
	}
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_563415D37D4EDE07*>* Field_1_1; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6C6849AAC1C2D325__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6C6849AAC1C2D325__CCTOR_OFFSET))();
	}

	::Class_1_563415D37D4EDE07* Method_1_DC7AE487B566916A(::RPG::GameCore::StagePrefabInfo* a1, ::Class_1_494BD190B553B399* a2, ::Il2CppArray<::System::String*>* a3)
	{
		return ((::Class_1_563415D37D4EDE07*(*)(::PVOID, ::RPG::GameCore::StagePrefabInfo*, ::Class_1_494BD190B553B399*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_6C6849AAC1C2D325_METHOD_1_DC7AE487B566916A_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6C6849AAC1C2D325_METHOD_1_30D1209326FA87FC_OFFSET))(this);
	}
};
