#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::GalGame { class DynamicObjectModifyActiveCfg; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }

#define MOLEMOLE_GALGAME_DYNAMICOBJECTMODIFYACTIVECFG_DYNAMICOBJECTMODIFYACTIVECFG_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x12333050)
#define MOLEMOLE_GALGAME_DYNAMICOBJECTMODIFYACTIVECFG_DYNAMICOBJECTMODIFYACTIVECFG_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x12333060)
#define MOLEMOLE_GALGAME_DYNAMICOBJECTMODIFYACTIVECFG_DYNAMICOBJECTMODIFYACTIVECFG_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x12333240)
#define MOLEMOLE_GALGAME_DYNAMICOBJECTMODIFYACTIVECFG_DYNAMICOBJECTMODIFYACTIVECFG_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x123333E0)
#define MOLEMOLE_GALGAME_DYNAMICOBJECTMODIFYACTIVECFG_DYNAMICOBJECTMODIFYACTIVECFG_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x123333A0)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int DynamicObjectModifyActiveCfg_DynamicObjectModifyActiveCfg_UnityGeneratedFormatter_TypeDefinitionIndex = 48577;

	class DynamicObjectModifyActiveCfg_DynamicObjectModifyActiveCfg_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::GalGame::DynamicObjectModifyActiveCfg*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Int32>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectModifyActiveCfg_DynamicObjectModifyActiveCfg_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x435C0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectModifyActiveCfg_DynamicObjectModifyActiveCfg_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x435C8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_DYNAMICOBJECTMODIFYACTIVECFG_DYNAMICOBJECTMODIFYACTIVECFG_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_DYNAMICOBJECTMODIFYACTIVECFG_DYNAMICOBJECTMODIFYACTIVECFG_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_DYNAMICOBJECTMODIFYACTIVECFG_DYNAMICOBJECTMODIFYACTIVECFG_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::DynamicObjectModifyActiveCfg*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::DynamicObjectModifyActiveCfg*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_DYNAMICOBJECTMODIFYACTIVECFG_DYNAMICOBJECTMODIFYACTIVECFG_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::GalGame::DynamicObjectModifyActiveCfg*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::DynamicObjectModifyActiveCfg*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_DYNAMICOBJECTMODIFYACTIVECFG_DYNAMICOBJECTMODIFYACTIVECFG_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
