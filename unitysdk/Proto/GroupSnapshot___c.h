#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Proto { class GroupSnapshot; }

#define PROTO_GROUPSNAPSHOT___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DD3E450)
#define PROTO_GROUPSNAPSHOT___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1DD3E490)
#define PROTO_GROUPSNAPSHOT___C___CCTOR_B__48_0_OFFSET UNITYSDK_OFFSET(0x1DD3E4A0)

namespace Proto
{
	inline static constexpr unsigned int GroupSnapshot___c_TypeDefinitionIndex = 25484;

	class GroupSnapshot___c : public ::System::Object
	{
	public:
		static ::Proto::GroupSnapshot___c** StaticGet___9()
		{
			return (::Proto::GroupSnapshot___c**)Il2CppClass::FromTypeDefinitionIndex(GroupSnapshot___c_TypeDefinitionIndex)->GetStaticField(0x5B970);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_GROUPSNAPSHOT___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GROUPSNAPSHOT___C__CTOR_OFFSET))(this);
		}

		::Proto::GroupSnapshot* __cctor_b__48_0()
		{
			return ((::Proto::GroupSnapshot*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GROUPSNAPSHOT___C___CCTOR_B__48_0_OFFSET))(this);
		}
	};
}
