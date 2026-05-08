#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Timeline::ZNet { class ZNetGroupTrack; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine::Timeline { class GroupTrack; }

#define MOLEMOLE_TIMELINE_ZNET_ZNETEXQTETAGSUPPORTTRACK___C_METHOD_1_735B19F2BDC753A9_1_OFFSET UNITYSDK_OFFSET(0x15BCC840)
#define MOLEMOLE_TIMELINE_ZNET_ZNETEXQTETAGSUPPORTTRACK___C_METHOD_1_735B19F2BDC753A9_OFFSET UNITYSDK_OFFSET(0x15BCC820)
#define MOLEMOLE_TIMELINE_ZNET_ZNETEXQTETAGSUPPORTTRACK___C_METHOD_1_9ABB49DACA67D467_OFFSET UNITYSDK_OFFSET(0x15BCC750)
#define MOLEMOLE_TIMELINE_ZNET_ZNETEXQTETAGSUPPORTTRACK___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15BCC700)
#define MOLEMOLE_TIMELINE_ZNET_ZNETEXQTETAGSUPPORTTRACK___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15BCC740)

namespace MoleMole::Timeline::ZNet
{
	inline static constexpr unsigned int ZNetExQTETagSupportTrack___c_TypeDefinitionIndex = 41231;

	class ZNetExQTETagSupportTrack___c : public ::System::Object
	{
	public:
		static ::MoleMole::Timeline::ZNet::ZNetExQTETagSupportTrack___c** StaticGet___9()
		{
			return (::MoleMole::Timeline::ZNet::ZNetExQTETagSupportTrack___c**)Il2CppClass::FromTypeDefinitionIndex(ZNetExQTETagSupportTrack___c_TypeDefinitionIndex)->GetStaticField(0x32490);
		}
		static ::System::Func_2<::MoleMole::Timeline::ZNet::ZNetGroupTrack*, ::System::Boolean>** StaticGet___9__0_2()
		{
			return (::System::Func_2<::MoleMole::Timeline::ZNet::ZNetGroupTrack*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ZNetExQTETagSupportTrack___c_TypeDefinitionIndex)->GetStaticField(0x32498);
		}
		static ::System::Func_2<::UnityEngine::Timeline::GroupTrack*, ::System::Boolean>** StaticGet___9__0_0()
		{
			return (::System::Func_2<::UnityEngine::Timeline::GroupTrack*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ZNetExQTETagSupportTrack___c_TypeDefinitionIndex)->GetStaticField(0x324A0);
		}
		static ::System::Func_2<::MoleMole::Timeline::ZNet::ZNetGroupTrack*, ::System::Boolean>** StaticGet___9__0_1()
		{
			return (::System::Func_2<::MoleMole::Timeline::ZNet::ZNetGroupTrack*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ZNetExQTETagSupportTrack___c_TypeDefinitionIndex)->GetStaticField(0x324A8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNET_ZNETEXQTETAGSUPPORTTRACK___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNET_ZNETEXQTETAGSUPPORTTRACK___C__CTOR_OFFSET))(this);
		}

		::System::Boolean Method_1_9ABB49DACA67D467(::UnityEngine::Timeline::GroupTrack* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Timeline::GroupTrack*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNET_ZNETEXQTETAGSUPPORTTRACK___C_METHOD_1_9ABB49DACA67D467_OFFSET))(this, a1);
		}

		::System::Boolean Method_1_735B19F2BDC753A9(::MoleMole::Timeline::ZNet::ZNetGroupTrack* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Timeline::ZNet::ZNetGroupTrack*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNET_ZNETEXQTETAGSUPPORTTRACK___C_METHOD_1_735B19F2BDC753A9_OFFSET))(this, a1);
		}

		::System::Boolean Method_1_735B19F2BDC753A9_1(::MoleMole::Timeline::ZNet::ZNetGroupTrack* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Timeline::ZNet::ZNetGroupTrack*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNET_ZNETEXQTETAGSUPPORTTRACK___C_METHOD_1_735B19F2BDC753A9_1_OFFSET))(this, a1);
		}
	};
}
