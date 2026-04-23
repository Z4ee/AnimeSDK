#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class LodTemplate; }
namespace RPG::GameCore { class NormDistanceLodTemplate; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_4F5CE5715D025883_METHOD_1_01C5A762CB3BFA4D_OFFSET UNITYSDK_OFFSET(0x12382A40)
#define CLASS_1_4F5CE5715D025883_METHOD_1_37D0382D0C30A2DC_1_OFFSET UNITYSDK_OFFSET(0x12383060)
#define CLASS_1_4F5CE5715D025883_METHOD_1_37D0382D0C30A2DC_2_OFFSET UNITYSDK_OFFSET(0x123830E0)
#define CLASS_1_4F5CE5715D025883_METHOD_1_37D0382D0C30A2DC_OFFSET UNITYSDK_OFFSET(0x12382FE0)
#define CLASS_1_4F5CE5715D025883_METHOD_1_7A5DBAD37174DC8E_OFFSET UNITYSDK_OFFSET(0x12382DD0)
#define CLASS_1_4F5CE5715D025883_METHOD_1_8D35E8C739EEB574_OFFSET UNITYSDK_OFFSET(0x12382700)
#define CLASS_1_4F5CE5715D025883_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x12382D60)
#define CLASS_1_4F5CE5715D025883__CTOR_1_OFFSET UNITYSDK_OFFSET(0x123829F0)
#define CLASS_1_4F5CE5715D025883__CTOR_OFFSET UNITYSDK_OFFSET(0x123826B0)

inline static constexpr unsigned int Class_1_4F5CE5715D025883_TypeDefinitionIndex = 68047;

class Class_1_4F5CE5715D025883 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Tuple_2<::System::Single, ::System::Int32>*>* Field_1_0; // 0x10
	::System::Single Field_1_1; // 0x18

	::System::Void _ctor(::RPG::GameCore::LodTemplate* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LodTemplate*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_4F5CE5715D025883__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _ctor_1(::RPG::GameCore::NormDistanceLodTemplate* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::NormDistanceLodTemplate*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_4F5CE5715D025883__CTOR_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_01C5A762CB3BFA4D(::RPG::GameCore::NormDistanceLodTemplate* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::NormDistanceLodTemplate*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_4F5CE5715D025883_METHOD_1_01C5A762CB3BFA4D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_8D35E8C739EEB574(::RPG::GameCore::LodTemplate* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LodTemplate*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_4F5CE5715D025883_METHOD_1_8D35E8C739EEB574_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4F5CE5715D025883_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Int32 Method_1_7A5DBAD37174DC8E(::System::Single a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Boolean a4)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Single, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4F5CE5715D025883_METHOD_1_7A5DBAD37174DC8E_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Int32 Method_1_37D0382D0C30A2DC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4F5CE5715D025883_METHOD_1_37D0382D0C30A2DC_OFFSET))(this);
	}

	::System::Int32 Method_1_37D0382D0C30A2DC_1()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4F5CE5715D025883_METHOD_1_37D0382D0C30A2DC_1_OFFSET))(this);
	}

	::System::Int32 Method_1_37D0382D0C30A2DC_2()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4F5CE5715D025883_METHOD_1_37D0382D0C30A2DC_2_OFFSET))(this);
	}
};
