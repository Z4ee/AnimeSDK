#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Data/NameID.h"
#include "unitysdk/System/Object.h"

class Class_1_F19AB08624168191;
namespace RPG::Client::Data { class DataDispatcher; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_DATA_GLOBALDATA_GETGLOBALDATAMODEL_OFFSET UNITYSDK_OFFSET(0x94462A0)
#define RPG_CLIENT_DATA_GLOBALDATA_REGISTERGLOBAL_OFFSET UNITYSDK_OFFSET(0x9445E40)
#define RPG_CLIENT_DATA_GLOBALDATA_UNREGISTER_OFFSET UNITYSDK_OFFSET(0x94460A0)
#define RPG_CLIENT_DATA_GLOBALDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0x94464B0)

namespace RPG::Client::Data
{
	inline static constexpr unsigned int GlobalData_TypeDefinitionIndex = 60188;

	class GlobalData : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::Client::Data::NameID, ::Class_1_F19AB08624168191*>** StaticGet_globalModels()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::Client::Data::NameID, ::Class_1_F19AB08624168191*>**)Il2CppClass::FromTypeDefinitionIndex(GlobalData_TypeDefinitionIndex)->GetStaticField(0x25CD0);
		}
		static ::RPG::Client::Data::DataDispatcher** StaticGet_Dispatcher()
		{
			return (::RPG::Client::Data::DataDispatcher**)Il2CppClass::FromTypeDefinitionIndex(GlobalData_TypeDefinitionIndex)->GetStaticField(0x25CD8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DATA_GLOBALDATA__CCTOR_OFFSET))();
		}

		static ::System::Boolean RegisterGlobal(::RPG::Client::Data::NameID nameID, ::Class_1_F19AB08624168191* dm)
		{
			return ((::System::Boolean(*)(::RPG::Client::Data::NameID, ::Class_1_F19AB08624168191*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DATA_GLOBALDATA_REGISTERGLOBAL_OFFSET))(nameID, dm);
		}

		static ::System::Boolean UnRegister(::RPG::Client::Data::NameID nameID)
		{
			return ((::System::Boolean(*)(::RPG::Client::Data::NameID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DATA_GLOBALDATA_UNREGISTER_OFFSET))(nameID);
		}

		static ::Class_1_F19AB08624168191* GetGlobalDataModel(::RPG::Client::Data::NameID nameID)
		{
			return ((::Class_1_F19AB08624168191*(*)(::RPG::Client::Data::NameID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DATA_GLOBALDATA_GETGLOBALDATAMODEL_OFFSET))(nameID);
		}
	};
}
