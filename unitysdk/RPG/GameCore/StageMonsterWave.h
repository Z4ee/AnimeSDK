#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_STAGEMONSTERWAVE_FROMARRAY_OFFSET UNITYSDK_OFFSET(0x17769080)
#define RPG_GAMECORE_STAGEMONSTERWAVE_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x17768E00)
#define RPG_GAMECORE_STAGEMONSTERWAVE_TOLIST_OFFSET UNITYSDK_OFFSET(0x17769140)
#define RPG_GAMECORE_STAGEMONSTERWAVE__CTOR_OFFSET UNITYSDK_OFFSET(0x17769020)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StageMonsterWave_TypeDefinitionIndex = 13878;

	class StageMonsterWave : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _waveCache; // 0x10
		::System::UInt32 Monster4; // 0x18
		::System::UInt32 Monster0; // 0x1C
		::System::UInt32 Monster1; // 0x20
		::System::UInt32 Monster2; // 0x24
		::System::UInt32 Monster3; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEMONSTERWAVE__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::StageMonsterWave*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StageMonsterWave*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEMONSTERWAVE_FROMBINARY_OFFSET))(array, val);
		}

		::System::Void FromArray(::Il2CppArray<::System::UInt32>* arr)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEMONSTERWAVE_FROMARRAY_OFFSET))(this, arr);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* ToList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEMONSTERWAVE_TOLIST_OFFSET))(this);
		}
	};
}
