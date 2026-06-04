#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_6B72CB78996603D1.h"

class Class_1_A92BC063ED2379EB;
class Class_2_B66C1067C0468FBB;
namespace RPG::GameCore { class ChimeraDuelEffectConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_30DBA00E70E20339_METHOD_3_03C70F3B039EAE63_OFFSET UNITYSDK_OFFSET(0xAECCD70)
#define CLASS_3_30DBA00E70E20339_METHOD_3_793D051EECB64640_OFFSET UNITYSDK_OFFSET(0xAECC6F0)
#define CLASS_3_30DBA00E70E20339_METHOD_3_FE56DBE513136158_OFFSET UNITYSDK_OFFSET(0xAECC0A0)
#define CLASS_3_30DBA00E70E20339__CTOR_OFFSET UNITYSDK_OFFSET(0xAECCD60)

inline static constexpr unsigned int Class_3_30DBA00E70E20339_TypeDefinitionIndex = 72017;

class Class_3_30DBA00E70E20339 : public ::Class_2_6B72CB78996603D1
{
public:
	// static const ::System::String* Field_3_0; // 0x0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_30DBA00E70E20339__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_3_FE56DBE513136158(::Class_1_A92BC063ED2379EB* a1, ::System::Collections::Generic::List_1<::Class_2_B66C1067C0468FBB*>* a2, ::RPG::GameCore::ChimeraDuelEffectConfig* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_A92BC063ED2379EB*, ::System::Collections::Generic::List_1<::Class_2_B66C1067C0468FBB*>*, ::RPG::GameCore::ChimeraDuelEffectConfig*))((::PBYTE)hIl2Cpp + CLASS_3_30DBA00E70E20339_METHOD_3_FE56DBE513136158_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_3_793D051EECB64640(::Class_1_A92BC063ED2379EB* a1, ::System::Collections::Generic::List_1<::Class_2_B66C1067C0468FBB*>* a2, ::RPG::GameCore::ChimeraDuelEffectConfig* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_A92BC063ED2379EB*, ::System::Collections::Generic::List_1<::Class_2_B66C1067C0468FBB*>*, ::RPG::GameCore::ChimeraDuelEffectConfig*))((::PBYTE)hIl2Cpp + CLASS_3_30DBA00E70E20339_METHOD_3_793D051EECB64640_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_3_03C70F3B039EAE63(::Class_1_A92BC063ED2379EB* a1, ::System::Collections::Generic::List_1<::Class_2_B66C1067C0468FBB*>* a2, ::RPG::GameCore::ChimeraDuelEffectConfig* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_A92BC063ED2379EB*, ::System::Collections::Generic::List_1<::Class_2_B66C1067C0468FBB*>*, ::RPG::GameCore::ChimeraDuelEffectConfig*))((::PBYTE)hIl2Cpp + CLASS_3_30DBA00E70E20339_METHOD_3_03C70F3B039EAE63_OFFSET))(this, a1, a2, a3);
	}
};
