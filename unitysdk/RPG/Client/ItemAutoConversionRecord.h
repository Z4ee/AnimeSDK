#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_70373EC0EA5FDDDA;
class Class_1_87B6445D24FE4E47;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client { class ItemAutoConversionMapping; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ITEMAUTOCONVERSIONRECORD_CREATE_1_OFFSET UNITYSDK_OFFSET(0xBD4A2A0)
#define RPG_CLIENT_ITEMAUTOCONVERSIONRECORD_CREATE_OFFSET UNITYSDK_OFFSET(0xBD4A180)
#define RPG_CLIENT_ITEMAUTOCONVERSIONRECORD_GET_CONVERSIONMAPPINGS_OFFSET UNITYSDK_OFFSET(0xBD5BCD0)
#define RPG_CLIENT_ITEMAUTOCONVERSIONRECORD__CREATECONVERSIONMAPPINGS_OFFSET UNITYSDK_OFFSET(0xBD5BD30)
#define RPG_CLIENT_ITEMAUTOCONVERSIONRECORD__CTOR_OFFSET UNITYSDK_OFFSET(0xBD5BCE0)

namespace RPG::Client
{
	inline static constexpr unsigned int ItemAutoConversionRecord_TypeDefinitionIndex = 61427;

	class ItemAutoConversionRecord : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::ItemAutoConversionMapping*>* _ConversionMappings; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMAUTOCONVERSIONRECORD__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::ItemAutoConversionMapping*>* get_ConversionMappings()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::ItemAutoConversionMapping*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMAUTOCONVERSIONRECORD_GET_CONVERSIONMAPPINGS_OFFSET))(this);
		}

		static ::RPG::Client::ItemAutoConversionRecord* Create(::Class_1_70373EC0EA5FDDDA* a1)
		{
			return ((::RPG::Client::ItemAutoConversionRecord*(*)(::Class_1_70373EC0EA5FDDDA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMAUTOCONVERSIONRECORD_CREATE_OFFSET))(a1);
		}

		static ::RPG::Client::ItemAutoConversionRecord* Create_1(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_87B6445D24FE4E47*>* a1)
		{
			return ((::RPG::Client::ItemAutoConversionRecord*(*)(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_87B6445D24FE4E47*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMAUTOCONVERSIONRECORD_CREATE_1_OFFSET))(a1);
		}

		::System::Void _CreateConversionMappings(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_87B6445D24FE4E47*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_87B6445D24FE4E47*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMAUTOCONVERSIONRECORD__CREATECONVERSIONMAPPINGS_OFFSET))(this, a1);
		}
	};
}
