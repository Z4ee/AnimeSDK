#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1AF243935D06EF67;
namespace RPG::Client::Promises { class IPromise; }
namespace System { template <typename T1, typename T2> class Converter_2; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_STORYLINEDATA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17B797E0)
#define RPG_CLIENT_STORYLINEDATA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17B79810)
#define RPG_CLIENT_STORYLINEDATA___C__GETALLFLOORIDS_B__37_0_OFFSET UNITYSDK_OFFSET(0x17B79820)
#define RPG_CLIENT_STORYLINEDATA___C___PREPAREFLOORDATA_B__44_0_OFFSET UNITYSDK_OFFSET(0x17B79880)

namespace RPG::Client
{
	inline static constexpr unsigned int StoryLineData___c_TypeDefinitionIndex = 64976;

	class StoryLineData___c : public ::System::Object
	{
	public:
		static ::System::Converter_2<::Class_1_1AF243935D06EF67*, ::System::UInt32>** StaticGet___9__37_0()
		{
			return (::System::Converter_2<::Class_1_1AF243935D06EF67*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(StoryLineData___c_TypeDefinitionIndex)->GetStaticField(0x37E30);
		}
		static ::RPG::Client::StoryLineData___c** StaticGet___9()
		{
			return (::RPG::Client::StoryLineData___c**)Il2CppClass::FromTypeDefinitionIndex(StoryLineData___c_TypeDefinitionIndex)->GetStaticField(0x37E38);
		}
		static ::System::Func_2<::Class_1_1AF243935D06EF67*, ::RPG::Client::Promises::IPromise*>** StaticGet___9__44_0()
		{
			return (::System::Func_2<::Class_1_1AF243935D06EF67*, ::RPG::Client::Promises::IPromise*>**)Il2CppClass::FromTypeDefinitionIndex(StoryLineData___c_TypeDefinitionIndex)->GetStaticField(0x37E40);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEDATA___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEDATA___C__CTOR_OFFSET))(this);
		}

		::System::UInt32 _GetAllFloorIDs_b__37_0(::Class_1_1AF243935D06EF67* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::Class_1_1AF243935D06EF67*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEDATA___C__GETALLFLOORIDS_B__37_0_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* __PrepareFloorData_b__44_0(::Class_1_1AF243935D06EF67* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::Class_1_1AF243935D06EF67*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEDATA___C___PREPAREFLOORDATA_B__44_0_OFFSET))(this, a1);
		}
	};
}
