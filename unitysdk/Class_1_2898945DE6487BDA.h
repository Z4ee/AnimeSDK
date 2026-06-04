#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_03D6D30E62EFB374_2;
class Class_1_36816D4DE394D200;
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_2898945DE6487BDA_METHOD_1_19A941F7642B1EB0_OFFSET UNITYSDK_OFFSET(0xA3FBE60)
#define CLASS_1_2898945DE6487BDA_METHOD_1_48B97A99F764D422_OFFSET UNITYSDK_OFFSET(0xA3FBBA0)
#define CLASS_1_2898945DE6487BDA_METHOD_1_4ED5A32649C8BEBA_OFFSET UNITYSDK_OFFSET(0xA3FBB10)
#define CLASS_1_2898945DE6487BDA_METHOD_1_93372B5F64B4F668_OFFSET UNITYSDK_OFFSET(0xA3FBDB0)
#define CLASS_1_2898945DE6487BDA_METHOD_1_BD9C62A454623742_OFFSET UNITYSDK_OFFSET(0xA3FBD00)
#define CLASS_1_2898945DE6487BDA__CTOR_OFFSET UNITYSDK_OFFSET(0xA3FBF50)

inline static constexpr unsigned int Class_1_2898945DE6487BDA_TypeDefinitionIndex = 67291;

class Class_1_2898945DE6487BDA : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::TurnBasedModifierInstance*, ::Class_1_03D6D30E62EFB374_2*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2898945DE6487BDA__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_4ED5A32649C8BEBA(::Class_1_36816D4DE394D200* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_36816D4DE394D200*))((::PBYTE)hIl2Cpp + CLASS_1_2898945DE6487BDA_METHOD_1_4ED5A32649C8BEBA_OFFSET))(this, a1);
	}

	::System::Void Method_1_BD9C62A454623742(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_1_2898945DE6487BDA_METHOD_1_BD9C62A454623742_OFFSET))(this, a1);
	}

	::Class_1_03D6D30E62EFB374_2* Method_1_93372B5F64B4F668(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::Class_1_03D6D30E62EFB374_2*(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_1_2898945DE6487BDA_METHOD_1_93372B5F64B4F668_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::RPG::GameCore::TurnBasedModifierInstance*>* Method_1_19A941F7642B1EB0()
	{
		return ((::System::Collections::Generic::List_1<::RPG::GameCore::TurnBasedModifierInstance*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2898945DE6487BDA_METHOD_1_19A941F7642B1EB0_OFFSET))(this);
	}

	::Class_1_03D6D30E62EFB374_2* Method_1_48B97A99F764D422(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::Class_1_03D6D30E62EFB374_2*(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_1_2898945DE6487BDA_METHOD_1_48B97A99F764D422_OFFSET))(this, a1);
	}
};
