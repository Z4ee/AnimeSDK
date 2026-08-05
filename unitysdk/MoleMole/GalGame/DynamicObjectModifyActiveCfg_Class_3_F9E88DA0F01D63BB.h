#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::GalGame { class DynamicObjectModifyActiveCfg; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }

#define MOLEMOLE_GALGAME_DYNAMICOBJECTMODIFYACTIVECFG_CLASS_3_F9E88DA0F01D63BB_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x190837A0)
#define MOLEMOLE_GALGAME_DYNAMICOBJECTMODIFYACTIVECFG_CLASS_3_F9E88DA0F01D63BB_READMEMBER_OFFSET UNITYSDK_OFFSET(0x190837B0)
#define MOLEMOLE_GALGAME_DYNAMICOBJECTMODIFYACTIVECFG_CLASS_3_F9E88DA0F01D63BB_WRITE_OFFSET UNITYSDK_OFFSET(0x19083940)
#define MOLEMOLE_GALGAME_DYNAMICOBJECTMODIFYACTIVECFG_CLASS_3_F9E88DA0F01D63BB__CCTOR_OFFSET UNITYSDK_OFFSET(0x19083AA0)
#define MOLEMOLE_GALGAME_DYNAMICOBJECTMODIFYACTIVECFG_CLASS_3_F9E88DA0F01D63BB__CTOR_OFFSET UNITYSDK_OFFSET(0x19083A60)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int DynamicObjectModifyActiveCfg_Class_3_F9E88DA0F01D63BB_TypeDefinitionIndex = 60121;

	class DynamicObjectModifyActiveCfg_Class_3_F9E88DA0F01D63BB : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::GalGame::DynamicObjectModifyActiveCfg*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Int32>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectModifyActiveCfg_Class_3_F9E88DA0F01D63BB_TypeDefinitionIndex)->GetStaticField(0x4A840);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectModifyActiveCfg_Class_3_F9E88DA0F01D63BB_TypeDefinitionIndex)->GetStaticField(0x4A848);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_DYNAMICOBJECTMODIFYACTIVECFG_CLASS_3_F9E88DA0F01D63BB__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_DYNAMICOBJECTMODIFYACTIVECFG_CLASS_3_F9E88DA0F01D63BB__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_DYNAMICOBJECTMODIFYACTIVECFG_CLASS_3_F9E88DA0F01D63BB_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::DynamicObjectModifyActiveCfg*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::DynamicObjectModifyActiveCfg*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_DYNAMICOBJECTMODIFYACTIVECFG_CLASS_3_F9E88DA0F01D63BB_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::GalGame::DynamicObjectModifyActiveCfg*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::DynamicObjectModifyActiveCfg*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_DYNAMICOBJECTMODIFYACTIVECFG_CLASS_3_F9E88DA0F01D63BB_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
