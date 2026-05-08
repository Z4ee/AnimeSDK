#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_27CCD45BA8768483_1;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_HOLLOWCHESSBOARD_CONFIGCHESSBOARDPLUGINMANAGER_CLASS_1_BBB23B5CD4CB6DB6_METHOD_1_5110E061C0DF5692_OFFSET UNITYSDK_OFFSET(0x16E5A610)
#define MOLEMOLE_HOLLOWCHESSBOARD_CONFIGCHESSBOARDPLUGINMANAGER_CLASS_1_BBB23B5CD4CB6DB6__CTOR_OFFSET UNITYSDK_OFFSET(0x16E5A600)

namespace MoleMole::HollowChessboard
{
	inline static constexpr unsigned int ConfigChessboardPluginManager_Class_1_BBB23B5CD4CB6DB6_TypeDefinitionIndex = 60921;

	class ConfigChessboardPluginManager_Class_1_BBB23B5CD4CB6DB6 : public ::System::Object
	{
	public:
		::System::Action_1<::Class_1_27CCD45BA8768483_1*>* Field_1_2; // 0x10
		::System::Action* Field_1_1; // 0x18
		::System::Int32 Field_1_0; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_CONFIGCHESSBOARDPLUGINMANAGER_CLASS_1_BBB23B5CD4CB6DB6__CTOR_OFFSET))(this);
		}

		::System::Void Method_1_5110E061C0DF5692(::Class_1_27CCD45BA8768483_1* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_27CCD45BA8768483_1*))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_CONFIGCHESSBOARDPLUGINMANAGER_CLASS_1_BBB23B5CD4CB6DB6_METHOD_1_5110E061C0DF5692_OFFSET))(this, a1);
		}
	};
}
