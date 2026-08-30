#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_B6045334FA181376;
class Class_2_D55679E3C796A7AF;
class Class_3_CD59F26A5F0E803D;
namespace Collections::Pooled { template <typename T1, typename T2> class PooledDictionary_2; }
namespace RPG::Client::RoadRash { class MonoRoadRashGameRoad; }
namespace RPG::Client::RoadRash { class MonoRoadRashGameSettings; }

#define CLASS_1_BDE834440C34BB91_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17BB35A0)
#define CLASS_1_BDE834440C34BB91_METHOD_1_140ADD2330A35AD4_OFFSET UNITYSDK_OFFSET(0x17BB56E0)
#define CLASS_1_BDE834440C34BB91_METHOD_1_148E914DF5D0B2BA_OFFSET UNITYSDK_OFFSET(0x17BB3990)
#define CLASS_1_BDE834440C34BB91_METHOD_1_DF1CE6C8082AFAAD_OFFSET UNITYSDK_OFFSET(0x17BB51A0)
#define CLASS_1_BDE834440C34BB91__CTOR_OFFSET UNITYSDK_OFFSET(0x17BB3590)

inline static constexpr unsigned int Class_1_BDE834440C34BB91_TypeDefinitionIndex = 75507;

class Class_1_BDE834440C34BB91 : public ::System::Object
{
public:
	::Class_3_CD59F26A5F0E803D* ADJNOFMEIKM; // 0x10
	::Class_2_D55679E3C796A7AF* FKINCGODJEP; // 0x18

	::System::Void _ctor(::Class_2_D55679E3C796A7AF* a1, ::Class_3_CD59F26A5F0E803D* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_D55679E3C796A7AF*, ::Class_3_CD59F26A5F0E803D*))((::PBYTE)hIl2Cpp + CLASS_1_BDE834440C34BB91__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BDE834440C34BB91_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_148E914DF5D0B2BA(::RPG::Client::RoadRash::MonoRoadRashGameSettings* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::RoadRash::MonoRoadRashGameSettings*))((::PBYTE)hIl2Cpp + CLASS_1_BDE834440C34BB91_METHOD_1_148E914DF5D0B2BA_OFFSET))(this, a1);
	}

	static ::System::Void Method_1_140ADD2330A35AD4(::Il2CppArray<::RPG::Client::RoadRash::MonoRoadRashGameRoad*>* a1, ::Il2CppArray<::Class_1_B6045334FA181376*>* a2, ::RPG::Client::RoadRash::MonoRoadRashGameRoad* a3, ::System::Single a4, ::Class_1_B6045334FA181376*& a5, ::System::Single& a6)
	{
		return ((::System::Void(*)(::Il2CppArray<::RPG::Client::RoadRash::MonoRoadRashGameRoad*>*, ::Il2CppArray<::Class_1_B6045334FA181376*>*, ::RPG::Client::RoadRash::MonoRoadRashGameRoad*, ::System::Single, ::Class_1_B6045334FA181376*&, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_1_BDE834440C34BB91_METHOD_1_140ADD2330A35AD4_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::Void Method_1_DF1CE6C8082AFAAD(::RPG::Client::RoadRash::MonoRoadRashGameSettings* a1, ::Collections::Pooled::PooledDictionary_2<::RPG::Client::RoadRash::MonoRoadRashGameRoad*, ::Class_1_B6045334FA181376*>* a2)
	{
		return ((::System::Void(*)(::RPG::Client::RoadRash::MonoRoadRashGameSettings*, ::Collections::Pooled::PooledDictionary_2<::RPG::Client::RoadRash::MonoRoadRashGameRoad*, ::Class_1_B6045334FA181376*>*))((::PBYTE)hIl2Cpp + CLASS_1_BDE834440C34BB91_METHOD_1_DF1CE6C8082AFAAD_OFFSET))(a1, a2);
	}
};
