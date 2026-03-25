#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/SwordTrainingPerformanceType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class LevelGraphComponent; }
namespace RPG::GameCore { class PerformanceIDPair; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_2F344C3347FF7120_METHOD_1_2D95286A4E4CCB11_OFFSET UNITYSDK_OFFSET(0x109EEA30)
#define CLASS_1_2F344C3347FF7120_METHOD_1_42F69F78C3B9D222_OFFSET UNITYSDK_OFFSET(0x109EE970)
#define CLASS_1_2F344C3347FF7120_METHOD_1_89F4C36FF7979D31_OFFSET UNITYSDK_OFFSET(0x109EE7D0)
#define CLASS_1_2F344C3347FF7120_METHOD_1_F49D4359EF0E5544_OFFSET UNITYSDK_OFFSET(0x109EE860)

inline static constexpr unsigned int Class_1_2F344C3347FF7120_TypeDefinitionIndex = 50320;

class Class_1_2F344C3347FF7120 : public ::System::Object
{
public:
	// static const ::System::String* Field_1_0; // 0x0

	static ::RPG::GameCore::LevelGraphComponent* Method_1_89F4C36FF7979D31(::RPG::Client::SwordTrainingPerformanceType a1, ::System::Collections::Generic::List_1<::RPG::GameCore::PerformanceIDPair*>* a2, ::System::Action* a3)
	{
		return ((::RPG::GameCore::LevelGraphComponent*(*)(::RPG::Client::SwordTrainingPerformanceType, ::System::Collections::Generic::List_1<::RPG::GameCore::PerformanceIDPair*>*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_2F344C3347FF7120_METHOD_1_89F4C36FF7979D31_OFFSET))(a1, a2, a3);
	}

	static ::System::Collections::Generic::List_1<::RPG::GameCore::PerformanceIDPair*>* Method_1_42F69F78C3B9D222(::System::UInt32 a1)
	{
		return ((::System::Collections::Generic::List_1<::RPG::GameCore::PerformanceIDPair*>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_2F344C3347FF7120_METHOD_1_42F69F78C3B9D222_OFFSET))(a1);
	}

	static ::System::Collections::Generic::List_1<::RPG::GameCore::PerformanceIDPair*>* Method_1_2D95286A4E4CCB11(::System::Collections::Generic::List_1<::System::UInt32>* a1)
	{
		return ((::System::Collections::Generic::List_1<::RPG::GameCore::PerformanceIDPair*>*(*)(::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_2F344C3347FF7120_METHOD_1_2D95286A4E4CCB11_OFFSET))(a1);
	}

	static ::RPG::GameCore::LevelGraphComponent* Method_1_F49D4359EF0E5544(::System::Collections::Generic::List_1<::RPG::GameCore::PerformanceIDPair*>* a1, ::System::Action* a2)
	{
		return ((::RPG::GameCore::LevelGraphComponent*(*)(::System::Collections::Generic::List_1<::RPG::GameCore::PerformanceIDPair*>*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_2F344C3347FF7120_METHOD_1_F49D4359EF0E5544_OFFSET))(a1, a2);
	}
};
