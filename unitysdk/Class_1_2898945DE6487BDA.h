#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_36816D4DE394D200;
class Class_1_722EA82C1161F2A1_2;
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_2898945DE6487BDA_METHOD_1_48B97A99F764D422_OFFSET UNITYSDK_OFFSET(0x1166F2C0)
#define CLASS_1_2898945DE6487BDA_METHOD_1_62D75ADFFEE4BD8B_OFFSET UNITYSDK_OFFSET(0x1166F1F0)
#define CLASS_1_2898945DE6487BDA_METHOD_1_6D82BA6D42D4F85D_OFFSET UNITYSDK_OFFSET(0x1166F430)
#define CLASS_1_2898945DE6487BDA_METHOD_1_7DFE7AC01EA7204D_OFFSET UNITYSDK_OFFSET(0x1166F5B0)
#define CLASS_1_2898945DE6487BDA_METHOD_1_93372B5F64B4F668_OFFSET UNITYSDK_OFFSET(0x1166F4F0)
#define CLASS_1_2898945DE6487BDA__CTOR_OFFSET UNITYSDK_OFFSET(0x1166F620)

inline static constexpr unsigned int Class_1_2898945DE6487BDA_TypeDefinitionIndex = 58981;

class Class_1_2898945DE6487BDA : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::TurnBasedModifierInstance*, ::Class_1_722EA82C1161F2A1_2*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2898945DE6487BDA__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_62D75ADFFEE4BD8B(::Class_1_36816D4DE394D200* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_36816D4DE394D200*))((::PBYTE)hIl2Cpp + CLASS_1_2898945DE6487BDA_METHOD_1_62D75ADFFEE4BD8B_OFFSET))(this, a1);
	}

	::System::Void Method_1_6D82BA6D42D4F85D(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_1_2898945DE6487BDA_METHOD_1_6D82BA6D42D4F85D_OFFSET))(this, a1);
	}

	::Class_1_722EA82C1161F2A1_2* Method_1_93372B5F64B4F668(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::Class_1_722EA82C1161F2A1_2*(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_1_2898945DE6487BDA_METHOD_1_93372B5F64B4F668_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::RPG::GameCore::TurnBasedModifierInstance*>* Method_1_7DFE7AC01EA7204D()
	{
		return ((::System::Collections::Generic::List_1<::RPG::GameCore::TurnBasedModifierInstance*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2898945DE6487BDA_METHOD_1_7DFE7AC01EA7204D_OFFSET))(this);
	}

	::Class_1_722EA82C1161F2A1_2* Method_1_48B97A99F764D422(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::Class_1_722EA82C1161F2A1_2*(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_1_2898945DE6487BDA_METHOD_1_48B97A99F764D422_OFFSET))(this, a1);
	}
};
