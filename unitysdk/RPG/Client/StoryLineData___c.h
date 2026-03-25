#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1AF243935D06EF67;
namespace RPG::Client::Promises { class IPromise; }
namespace System { template <typename T1, typename T2> class Converter_2; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_STORYLINEDATA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xA4EC160)
#define RPG_CLIENT_STORYLINEDATA___C__CTOR_OFFSET UNITYSDK_OFFSET(0xA4EC190)
#define RPG_CLIENT_STORYLINEDATA___C__GETALLFLOORIDS_B__37_0_OFFSET UNITYSDK_OFFSET(0xA4EC1A0)
#define RPG_CLIENT_STORYLINEDATA___C___PREPAREFLOORDATA_B__45_0_OFFSET UNITYSDK_OFFSET(0xA4EC200)

namespace RPG::Client
{
	inline static constexpr unsigned int StoryLineData___c_TypeDefinitionIndex = 55483;

	class StoryLineData___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::Class_1_1AF243935D06EF67*, ::RPG::Client::Promises::IPromise*>** StaticGet___9__45_0()
		{
			return (::System::Func_2<::Class_1_1AF243935D06EF67*, ::RPG::Client::Promises::IPromise*>**)Il2CppClass::FromTypeDefinitionIndex(StoryLineData___c_TypeDefinitionIndex)->GetStaticField(0x27DC0);
		}
		static ::RPG::Client::StoryLineData___c** StaticGet___9()
		{
			return (::RPG::Client::StoryLineData___c**)Il2CppClass::FromTypeDefinitionIndex(StoryLineData___c_TypeDefinitionIndex)->GetStaticField(0x27DC8);
		}
		static ::System::Converter_2<::Class_1_1AF243935D06EF67*, ::System::UInt32>** StaticGet___9__37_0()
		{
			return (::System::Converter_2<::Class_1_1AF243935D06EF67*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(StoryLineData___c_TypeDefinitionIndex)->GetStaticField(0x27DD0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEDATA___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEDATA___C__CTOR_OFFSET))(this);
		}

		::System::UInt32 _GetAllFloorIDs_b__37_0(::Class_1_1AF243935D06EF67* floorData)
		{
			return ((::System::UInt32(*)(::PVOID, ::Class_1_1AF243935D06EF67*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEDATA___C__GETALLFLOORIDS_B__37_0_OFFSET))(this, floorData);
		}

		::RPG::Client::Promises::IPromise* __PrepareFloorData_b__45_0(::Class_1_1AF243935D06EF67* floor)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::Class_1_1AF243935D06EF67*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEDATA___C___PREPAREFLOORDATA_B__45_0_OFFSET))(this, floor);
		}
	};
}
