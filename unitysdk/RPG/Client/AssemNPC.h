#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ASSEMNPC_METHOD_1_92D59DB27A2254BC_OFFSET UNITYSDK_OFFSET(0xC77C730)
#define RPG_CLIENT_ASSEMNPC_METHOD_1_9656213C005E9904_OFFSET UNITYSDK_OFFSET(0xC77C3C0)
#define RPG_CLIENT_ASSEMNPC_METHOD_1_ABD5B53377E7C191_OFFSET UNITYSDK_OFFSET(0xC77C590)
#define RPG_CLIENT_ASSEMNPC_ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0xC77C920)
#define RPG_CLIENT_ASSEMNPC_ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0xC77C8E0)
#define RPG_CLIENT_ASSEMNPC_TOSTRING_OFFSET UNITYSDK_OFFSET(0xC77C810)
#define RPG_CLIENT_ASSEMNPC__CTOR_OFFSET UNITYSDK_OFFSET(0xC77C7D0)

namespace RPG::Client
{
	inline static constexpr unsigned int AssemNPC_TypeDefinitionIndex = 60140;

	class AssemNPC : public ::System::Object
	{
	public:
		::System::String* AssemNPCID; // 0x10
		::System::String* WorldOverride; // 0x18
		::System::String* Face; // 0x20
		::System::String* FaceMat; // 0x28
		::System::String* Body; // 0x30
		::System::String* BodyMat; // 0x38
		::System::String* Hair; // 0x40
		::System::String* HairMat; // 0x48
		::System::String* Item; // 0x50
		::System::String* ItemMat; // 0x58
		::System::Single AssemScore; // 0x60
		::System::Collections::Generic::List_1<::System::String*>* MatVariantKeys; // 0x68
		::System::String* AnimatorPath; // 0x70
		::System::Int32 BodySizeInt; // 0x78
		::System::String* FreeStyleCharacterID; // 0x80
		::System::String* FreeStyleCharacterConfigPath; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSEMNPC__CTOR_OFFSET))(this);
		}

		::System::Boolean Method_1_9656213C005E9904(::RPG::Client::AssemNPC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::AssemNPC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSEMNPC_METHOD_1_9656213C005E9904_OFFSET))(this, a1);
		}

		static ::System::Boolean Method_1_ABD5B53377E7C191(::System::Collections::Generic::List_1<::System::String*>* a1, ::System::Collections::Generic::List_1<::System::String*>* a2)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::System::String*>*, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSEMNPC_METHOD_1_ABD5B53377E7C191_OFFSET))(a1, a2);
		}

		::RPG::Client::AssemNPC* Method_1_92D59DB27A2254BC()
		{
			return ((::RPG::Client::AssemNPC*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSEMNPC_METHOD_1_92D59DB27A2254BC_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSEMNPC_TOSTRING_OFFSET))(this);
		}

		::System::Void OnBeforeSerialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSEMNPC_ONBEFORESERIALIZE_OFFSET))(this);
		}

		::System::Void OnAfterDeserialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSEMNPC_ONAFTERDESERIALIZE_OFFSET))(this);
		}
	};
}
