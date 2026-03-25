#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelEffectType.h"
#include "unitysdk/System/Object.h"

class Class_1_3B1EA953A4067E26;
class Class_1_43BD383C98B4C0C5_170;
class Class_1_4F79C408792F4D54;
class Class_1_C4FD36003027AC99;
class Class_2_49CAB3DE74280C58;
class Class_3_D637C1E17FCBBFB0;
namespace RPG::GameCore { class ChimeraDuelEffectConfig; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_2CE61CB9B2E57F36_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8D1D840)
#define CLASS_1_2CE61CB9B2E57F36_METHOD_1_2DD602D72BB65563_OFFSET UNITYSDK_OFFSET(0x8D1D010)
#define CLASS_1_2CE61CB9B2E57F36_METHOD_1_399EC1D6D4B8E36F_1_OFFSET UNITYSDK_OFFSET(0x8D1D3D0)
#define CLASS_1_2CE61CB9B2E57F36_METHOD_1_399EC1D6D4B8E36F_OFFSET UNITYSDK_OFFSET(0x8D1CE80)
#define CLASS_1_2CE61CB9B2E57F36_METHOD_1_FD4F1BF86644918E_OFFSET UNITYSDK_OFFSET(0x8D1D560)
#define CLASS_1_2CE61CB9B2E57F36__CTOR_OFFSET UNITYSDK_OFFSET(0x8D1CDE0)

inline static constexpr unsigned int Class_1_2CE61CB9B2E57F36_TypeDefinitionIndex = 62960;

class Class_1_2CE61CB9B2E57F36 : public ::System::Object
{
public:
	::Class_1_3B1EA953A4067E26* Field_1_0; // 0x10
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::ChimeraDuelEffectType, ::Class_1_4F79C408792F4D54*>* Field_1_2; // 0x18
	::Class_3_D637C1E17FCBBFB0* Field_1_1; // 0x20

	::System::Void _ctor(::Class_1_3B1EA953A4067E26* a1, ::Class_3_D637C1E17FCBBFB0* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3B1EA953A4067E26*, ::Class_3_D637C1E17FCBBFB0*))((::PBYTE)hIl2Cpp + CLASS_1_2CE61CB9B2E57F36__CTOR_OFFSET))(this, a1, a2);
	}

	::Class_1_43BD383C98B4C0C5_170* Method_1_399EC1D6D4B8E36F(::Class_1_C4FD36003027AC99* a1, ::System::Collections::Generic::List_1<::Class_2_49CAB3DE74280C58*>* a2, ::RPG::GameCore::ChimeraDuelEffectConfig* a3)
	{
		return ((::Class_1_43BD383C98B4C0C5_170*(*)(::PVOID, ::Class_1_C4FD36003027AC99*, ::System::Collections::Generic::List_1<::Class_2_49CAB3DE74280C58*>*, ::RPG::GameCore::ChimeraDuelEffectConfig*))((::PBYTE)hIl2Cpp + CLASS_1_2CE61CB9B2E57F36_METHOD_1_399EC1D6D4B8E36F_OFFSET))(this, a1, a2, a3);
	}

	::Class_1_43BD383C98B4C0C5_170* Method_1_399EC1D6D4B8E36F_1(::Class_1_C4FD36003027AC99* a1, ::System::Collections::Generic::List_1<::Class_2_49CAB3DE74280C58*>* a2, ::RPG::GameCore::ChimeraDuelEffectConfig* a3)
	{
		return ((::Class_1_43BD383C98B4C0C5_170*(*)(::PVOID, ::Class_1_C4FD36003027AC99*, ::System::Collections::Generic::List_1<::Class_2_49CAB3DE74280C58*>*, ::RPG::GameCore::ChimeraDuelEffectConfig*))((::PBYTE)hIl2Cpp + CLASS_1_2CE61CB9B2E57F36_METHOD_1_399EC1D6D4B8E36F_1_OFFSET))(this, a1, a2, a3);
	}

	::Class_1_4F79C408792F4D54* Method_1_2DD602D72BB65563(::RPG::GameCore::ChimeraDuelEffectType a1)
	{
		return ((::Class_1_4F79C408792F4D54*(*)(::PVOID, ::RPG::GameCore::ChimeraDuelEffectType))((::PBYTE)hIl2Cpp + CLASS_1_2CE61CB9B2E57F36_METHOD_1_2DD602D72BB65563_OFFSET))(this, a1);
	}

	::Class_1_4F79C408792F4D54* Method_1_FD4F1BF86644918E(::RPG::GameCore::ChimeraDuelEffectType a1)
	{
		return ((::Class_1_4F79C408792F4D54*(*)(::PVOID, ::RPG::GameCore::ChimeraDuelEffectType))((::PBYTE)hIl2Cpp + CLASS_1_2CE61CB9B2E57F36_METHOD_1_FD4F1BF86644918E_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2CE61CB9B2E57F36_DISPOSE_OFFSET))(this);
	}
};
