#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Timeline::ZNet { class ZNetGroupTrack; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_TIMELINE_ZNET_ZNETCAMERASUPPORTTRACK___C_METHOD_1_735B19F2BDC753A9_OFFSET UNITYSDK_OFFSET(0x18D275D0)
#define MOLEMOLE_TIMELINE_ZNET_ZNETCAMERASUPPORTTRACK___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18D27580)
#define MOLEMOLE_TIMELINE_ZNET_ZNETCAMERASUPPORTTRACK___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18D275C0)

namespace MoleMole::Timeline::ZNet
{
	inline static constexpr unsigned int ZNetCameraSupportTrack___c_TypeDefinitionIndex = 87550;

	class ZNetCameraSupportTrack___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::MoleMole::Timeline::ZNet::ZNetGroupTrack*, ::System::Boolean>** StaticGet___9__0_1()
		{
			return (::System::Func_2<::MoleMole::Timeline::ZNet::ZNetGroupTrack*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ZNetCameraSupportTrack___c_TypeDefinitionIndex)->GetStaticField(0x37750);
		}
		static ::MoleMole::Timeline::ZNet::ZNetCameraSupportTrack___c** StaticGet___9()
		{
			return (::MoleMole::Timeline::ZNet::ZNetCameraSupportTrack___c**)Il2CppClass::FromTypeDefinitionIndex(ZNetCameraSupportTrack___c_TypeDefinitionIndex)->GetStaticField(0x37758);
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
