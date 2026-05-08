#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;

#define MOLEMOLE_CONFIG_CONFIGCAMERACOMPOSER_CLONE_OFFSET UNITYSDK_OFFSET(0x159E5750)
#define MOLEMOLE_CONFIG_CONFIGCAMERACOMPOSER_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x159E5480)
#define MOLEMOLE_CONFIG_CONFIGCAMERACOMPOSER_FROMFLX_OFFSET UNITYSDK_OFFSET(0x159E4DF0)
#define MOLEMOLE_CONFIG_CONFIGCAMERACOMPOSER_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x159E54E0)
#define MOLEMOLE_CONFIG_CONFIGCAMERACOMPOSER_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x159E4E70)
#define MOLEMOLE_CONFIG_CONFIGCAMERACOMPOSER_LERP_OFFSET UNITYSDK_OFFSET(0x159E5850)
#define MOLEMOLE_CONFIG_CONFIGCAMERACOMPOSER_OP_ADDITION_OFFSET UNITYSDK_OFFSET(0x159E5770)
#define MOLEMOLE_CONFIG_CONFIGCAMERACOMPOSER_OP_SUBTRACTION_OFFSET UNITYSDK_OFFSET(0x159E57E0)
#define MOLEMOLE_CONFIG_CONFIGCAMERACOMPOSER_ZERO_OFFSET UNITYSDK_OFFSET(0x159E5700)
#define MOLEMOLE_CONFIG_CONFIGCAMERACOMPOSER__CCTOR_OFFSET UNITYSDK_OFFSET(0x159E5970)
#define MOLEMOLE_CONFIG_CONFIGCAMERACOMPOSER__CTOR_OFFSET UNITYSDK_OFFSET(0x159E5960)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigCameraComposer_TypeDefinitionIndex = 41411;

	class ConfigCameraComposer : public ::System::Object
	{
	public:
		static ::MoleMole::Config::ConfigCameraComposer** StaticGet_Default()
		{
			return (::MoleMole::Config::ConfigCameraComposer**)Il2CppClass::FromTypeDefinitionIndex(ConfigCameraComposer_TypeDefinitionIndex)->GetStaticField(0x3E120);
		}
		::System::Single ScreenY; // 0x10
		::System::Single BiasX; // 0x14
		::System::Single BiasY; // 0x18
		::System::Single ScreenX; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERACOMPOSER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERACOMPOSER__CCTOR_OFFSET))();
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERACOMPOSER_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERACOMPOSER_INTERNALFROMFLX_OFFSET))(this, node);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERACOMPOSER_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERACOMPOSER_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Void Zero()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERACOMPOSER_ZERO_OFFSET))(this);
		}

		::System::Void Clone(::MoleMole::Config::ConfigCameraComposer* target)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigCameraComposer*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERACOMPOSER_CLONE_OFFSET))(this, target);
		}

		static ::MoleMole::Config::ConfigCameraComposer* op_Addition(::MoleMole::Config::ConfigCameraComposer* a, ::MoleMole::Config::ConfigCameraComposer* b)
		{
			return ((::MoleMole::Config::ConfigCameraComposer*(*)(::MoleMole::Config::ConfigCameraComposer*, ::MoleMole::Config::ConfigCameraComposer*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERACOMPOSER_OP_ADDITION_OFFSET))(a, b);
		}

		static ::MoleMole::Config::ConfigCameraComposer* op_Subtraction(::MoleMole::Config::ConfigCameraComposer* a, ::MoleMole::Config::ConfigCameraComposer* b)
		{
			return ((::MoleMole::Config::ConfigCameraComposer*(*)(::MoleMole::Config::ConfigCameraComposer*, ::MoleMole::Config::ConfigCameraComposer*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERACOMPOSER_OP_SUBTRACTION_OFFSET))(a, b);
		}

		static ::MoleMole::Config::ConfigCameraComposer* Lerp(::MoleMole::Config::ConfigCameraComposer* a, ::MoleMole::Config::ConfigCameraComposer* b, ::MoleMole::Config::ConfigCameraComposer*& data, ::System::Single t)
		{
			return ((::MoleMole::Config::ConfigCameraComposer*(*)(::MoleMole::Config::ConfigCameraComposer*, ::MoleMole::Config::ConfigCameraComposer*, ::MoleMole::Config::ConfigCameraComposer*&, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERACOMPOSER_LERP_OFFSET))(a, b, data, t);
		}
	};
}
