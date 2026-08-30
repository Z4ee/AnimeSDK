#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class StoryLineData; }
namespace RPG::Client::Promises { class IPromise; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_STORYLINEMODULE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A518460)
#define RPG_CLIENT_STORYLINEMODULE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A518490)
#define RPG_CLIENT_STORYLINEMODULE___C__SENDSTORYLINEDATA_B__7_0_OFFSET UNITYSDK_OFFSET(0x1A5184A0)

namespace RPG::Client
{
	inline static constexpr unsigned int StoryLineModule___c_TypeDefinitionIndex = 67988;

	class StoryLineModule___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::StoryLineData*, ::RPG::Client::Promises::IPromise*>** StaticGet___9__7_0()
		{
			return (::System::Func_2<::RPG::Client::StoryLineData*, ::RPG::Client::Promises::IPromise*>**)Il2CppClass::FromTypeDefinitionIndex(StoryLineModule___c_TypeDefinitionIndex)->GetStaticField(0x33D50);
		}
		static ::RPG::Client::StoryLineModule___c** StaticGet___9()
		{
			return (::RPG::Client::StoryLineModule___c**)Il2CppClass::FromTypeDefinitionIndex(StoryLineModule___c_TypeDefinitionIndex)->GetStaticField(0x33D58);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEMODULE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEMODULE___C__CTOR_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _SendStoryLineData_b__7_0(::RPG::Client::StoryLineData* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::StoryLineData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEMODULE___C__SENDSTORYLINEDATA_B__7_0_OFFSET))(this, a1);
		}
	};
}
