#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_591DD46947F040CB.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace RPG::Client { class MonoAttackHitBox; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define RPG_CLIENT_MONOATTACKHITBOX_CLASS_3_A1231C7CCD391D53_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xA910120)
#define RPG_CLIENT_MONOATTACKHITBOX_CLASS_3_A1231C7CCD391D53_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xA9101A0)
#define RPG_CLIENT_MONOATTACKHITBOX_CLASS_3_A1231C7CCD391D53_INVOKE_OFFSET UNITYSDK_OFFSET(0xA90F750)
#define RPG_CLIENT_MONOATTACKHITBOX_CLASS_3_A1231C7CCD391D53__CTOR_OFFSET UNITYSDK_OFFSET(0xA910100)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoAttackHitBox_Class_3_A1231C7CCD391D53_TypeDefinitionIndex = 63193;

	class MonoAttackHitBox_Class_3_A1231C7CCD391D53 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOATTACKHITBOX_CLASS_3_A1231C7CCD391D53__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::RPG::Client::MonoAttackHitBox* a1, ::Struct_2_591DD46947F040CB a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoAttackHitBox*, ::Struct_2_591DD46947F040CB))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOATTACKHITBOX_CLASS_3_A1231C7CCD391D53_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::RPG::Client::MonoAttackHitBox* a1, ::Struct_2_591DD46947F040CB a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::RPG::Client::MonoAttackHitBox*, ::Struct_2_591DD46947F040CB, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOATTACKHITBOX_CLASS_3_A1231C7CCD391D53_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOATTACKHITBOX_CLASS_3_A1231C7CCD391D53_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
