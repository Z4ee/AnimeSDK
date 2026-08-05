#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GameSubsystemBaseEx_1.h"

class Class_2_99D9CEE2E496E71D;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_GENERICSCORESUBSYSTEM_GETSCOREDETAIL_OFFSET UNITYSDK_OFFSET(0x16857760)
#define MOLEMOLE_GENERICSCORESUBSYSTEM_GETSCORERATIO_OFFSET UNITYSDK_OFFSET(0x16857A70)
#define MOLEMOLE_GENERICSCORESUBSYSTEM_GETSCORERECOVER_OFFSET UNITYSDK_OFFSET(0x16857B80)
#define MOLEMOLE_GENERICSCORESUBSYSTEM_GETSCORE_OFFSET UNITYSDK_OFFSET(0x16857900)
#define MOLEMOLE_GENERICSCORESUBSYSTEM_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x168573C0)
#define MOLEMOLE_GENERICSCORESUBSYSTEM_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x168574C0)
#define MOLEMOLE_GENERICSCORESUBSYSTEM_REGISTERGENERICSCOREMIXIN_OFFSET UNITYSDK_OFFSET(0x168575A0)
#define MOLEMOLE_GENERICSCORESUBSYSTEM_TRYGETSCORE_OFFSET UNITYSDK_OFFSET(0x16857C90)
#define MOLEMOLE_GENERICSCORESUBSYSTEM_UNREGISTERGENERICSCOREMIXIN_OFFSET UNITYSDK_OFFSET(0x168576D0)
#define MOLEMOLE_GENERICSCORESUBSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x16857E00)
#define MOLEMOLE_GENERICSCORESUBSYSTEM___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x16857E20)
#define MOLEMOLE_GENERICSCORESUBSYSTEM___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x16857EB0)

namespace MoleMole
{
	inline static constexpr unsigned int GenericScoreSubsystem_TypeDefinitionIndex = 57185;

	class GenericScoreSubsystem : public ::MoleMole::GameSubsystemBaseEx_1<::MoleMole::GenericScoreSubsystem*>
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_2_99D9CEE2E496E71D*>* GenericScoreMixinMap; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GENERICSCORESUBSYSTEM__CTOR_OFFSET))(this);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GENERICSCORESUBSYSTEM_ONAWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GENERICSCORESUBSYSTEM_ONDESTROY_OFFSET))(this);
		}

		::System::Void RegisterGenericScoreMixin(::System::String* key, ::Class_2_99D9CEE2E496E71D* mixin)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Class_2_99D9CEE2E496E71D*))((::PBYTE)hIl2Cpp + MOLEMOLE_GENERICSCORESUBSYSTEM_REGISTERGENERICSCOREMIXIN_OFFSET))(this, key, mixin);
		}

		::System::Void UnregisterGenericScoreMixin(::System::String* key)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_GENERICSCORESUBSYSTEM_UNREGISTERGENERICSCOREMIXIN_OFFSET))(this, key);
		}

		::System::Boolean GetScoreDetail(::System::String* key, ::System::Single& score, ::System::Single& maxScore)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + MOLEMOLE_GENERICSCORESUBSYSTEM_GETSCOREDETAIL_OFFSET))(this, key, score, maxScore);
		}

		::System::Single GetScore(::System::String* key, ::System::String* tag)
		{
			return ((::System::Single(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_GENERICSCORESUBSYSTEM_GETSCORE_OFFSET))(this, key, tag);
		}

		::System::Single GetScoreRatio(::System::String* key)
		{
			return ((::System::Single(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_GENERICSCORESUBSYSTEM_GETSCORERATIO_OFFSET))(this, key);
		}

		::System::Single GetScoreRecover(::System::String* key)
		{
			return ((::System::Single(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_GENERICSCORESUBSYSTEM_GETSCORERECOVER_OFFSET))(this, key);
		}

		::System::Boolean TryGetScore(::System::String* key, ::System::String* tag, ::System::Single& score)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*, ::System::Single&))((::PBYTE)hIl2Cpp + MOLEMOLE_GENERICSCORESUBSYSTEM_TRYGETSCORE_OFFSET))(this, key, tag, score);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GENERICSCORESUBSYSTEM___BASE_ONAWAKE_OFFSET))(this);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GENERICSCORESUBSYSTEM___BASE_ONDESTROY_OFFSET))(this);
		}
	};
}
