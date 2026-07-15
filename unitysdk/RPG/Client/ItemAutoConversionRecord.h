#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_66F48F07052E8E37;
class Class_1_FC8BF52F067E8047;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client { class ItemAutoConversionMapping; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ITEMAUTOCONVERSIONRECORD_CREATE_1_OFFSET UNITYSDK_OFFSET(0x16C412F0)
#define RPG_CLIENT_ITEMAUTOCONVERSIONRECORD_CREATE_OFFSET UNITYSDK_OFFSET(0x16C411D0)
#define RPG_CLIENT_ITEMAUTOCONVERSIONRECORD_GET_CONVERSIONMAPPINGS_OFFSET UNITYSDK_OFFSET(0x16C54870)
#define RPG_CLIENT_ITEMAUTOCONVERSIONRECORD__CREATECONVERSIONMAPPINGS_OFFSET UNITYSDK_OFFSET(0x16C54900)
#define RPG_CLIENT_ITEMAUTOCONVERSIONRECORD__CTOR_OFFSET UNITYSDK_OFFSET(0x16C548B0)

namespace RPG::Client
{
	inline static constexpr unsigned int ItemAutoConversionRecord_TypeDefinitionIndex = 62772;

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

		static ::RPG::Client::ItemAutoConversionRecord* Create(::Class_1_66F48F07052E8E37* a1)
		{
			return ((::RPG::Client::ItemAutoConversionRecord*(*)(::Class_1_66F48F07052E8E37*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMAUTOCONVERSIONRECORD_CREATE_OFFSET))(a1);
		}

		static ::RPG::Client::ItemAutoConversionRecord* Create_1(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FC8BF52F067E8047*>* a1)
		{
			return ((::RPG::Client::ItemAutoConversionRecord*(*)(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FC8BF52F067E8047*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMAUTOCONVERSIONRECORD_CREATE_1_OFFSET))(a1);
		}

		::System::Void _CreateConversionMappings(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FC8BF52F067E8047*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FC8BF52F067E8047*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMAUTOCONVERSIONRECORD__CREATECONVERSIONMAPPINGS_OFFSET))(this, a1);
		}
	};
}
