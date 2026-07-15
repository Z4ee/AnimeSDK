#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Proto { class DialogSnapshot; }

#define PROTO_DIALOGSNAPSHOT___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BF77F00)
#define PROTO_DIALOGSNAPSHOT___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF77F40)
#define PROTO_DIALOGSNAPSHOT___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1BF77F50)

namespace Proto
{
	inline static constexpr unsigned int DialogSnapshot___c_TypeDefinitionIndex = 24919;

	class DialogSnapshot___c : public ::System::Object
	{
	public:
		static ::Proto::DialogSnapshot___c** StaticGet___9()
		{
			return (::Proto::DialogSnapshot___c**)Il2CppClass::FromTypeDefinitionIndex(DialogSnapshot___c_TypeDefinitionIndex)->GetStaticField(0x3C170);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_DIALOGSNAPSHOT___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_DIALOGSNAPSHOT___C__CTOR_OFFSET))(this);
		}

		::Proto::DialogSnapshot* __cctor_b__28_0()
		{
			return ((::Proto::DialogSnapshot*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_DIALOGSNAPSHOT___C___CCTOR_B__28_0_OFFSET))(this);
		}
	};
}
