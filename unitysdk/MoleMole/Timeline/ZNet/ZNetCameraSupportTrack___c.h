#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Timeline::ZNet { class ZNetGroupTrack; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_TIMELINE_ZNET_ZNETCAMERASUPPORTTRACK___C_METHOD_1_735B19F2BDC753A9_OFFSET UNITYSDK_OFFSET(0x1B21F830)
#define MOLEMOLE_TIMELINE_ZNET_ZNETCAMERASUPPORTTRACK___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B21F7E0)
#define MOLEMOLE_TIMELINE_ZNET_ZNETCAMERASUPPORTTRACK___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1B21F820)

namespace MoleMole::Timeline::ZNet
{
	inline static constexpr unsigned int ZNetCameraSupportTrack___c_TypeDefinitionIndex = 40490;

	class ZNetCameraSupportTrack___c : public ::System::Object
	{
	public:
		static ::MoleMole::Timeline::ZNet::ZNetCameraSupportTrack___c** StaticGet___9()
		{
			return (::MoleMole::Timeline::ZNet::ZNetCameraSupportTrack___c**)Il2CppClass::FromTypeDefinitionIndex(ZNetCameraSupportTrack___c_TypeDefinitionIndex)->GetStaticField(0x3A0B0);
		}
		static ::System::Func_2<::MoleMole::Timeline::ZNet::ZNetGroupTrack*, ::System::Boolean>** StaticGet___9__0_1()
		{
			return (::System::Func_2<::MoleMole::Timeline::ZNet::ZNetGroupTrack*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ZNetCameraSupportTrack___c_TypeDefinitionIndex)->GetStaticField(0x3A0B8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNET_ZNETCAMERASUPPORTTRACK___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNET_ZNETCAMERASUPPORTTRACK___C__CTOR_OFFSET))(this);
		}

		::System::Boolean Method_1_735B19F2BDC753A9(::MoleMole::Timeline::ZNet::ZNetGroupTrack* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Timeline::ZNet::ZNetGroupTrack*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNET_ZNETCAMERASUPPORTTRACK___C_METHOD_1_735B19F2BDC753A9_OFFSET))(this, a1);
		}
	};
}
