#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Proto { class TakeMailAttachmentScRsp; }

#define PROTO_TAKEMAILATTACHMENTSCRSP___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D9802B0)
#define PROTO_TAKEMAILATTACHMENTSCRSP___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1D9802F0)
#define PROTO_TAKEMAILATTACHMENTSCRSP___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1D980300)

namespace Proto
{
	inline static constexpr unsigned int TakeMailAttachmentScRsp___c_TypeDefinitionIndex = 29972;

	class TakeMailAttachmentScRsp___c : public ::System::Object
	{
	public:
		static ::Proto::TakeMailAttachmentScRsp___c** StaticGet___9()
		{
			return (::Proto::TakeMailAttachmentScRsp___c**)Il2CppClass::FromTypeDefinitionIndex(TakeMailAttachmentScRsp___c_TypeDefinitionIndex)->GetStaticField(0x950);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_TAKEMAILATTACHMENTSCRSP___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_TAKEMAILATTACHMENTSCRSP___C__CTOR_OFFSET))(this);
		}

		::Proto::TakeMailAttachmentScRsp* __cctor_b__38_0()
		{
			return ((::Proto::TakeMailAttachmentScRsp*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_TAKEMAILATTACHMENTSCRSP___C___CCTOR_B__38_0_OFFSET))(this);
		}
	};
}
