#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ElectricChainV2/Line.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client::ElectricChainV2 { class Shape; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ELECTRICCHAINV2_POLYLINE_GET_LENGTHS_OFFSET UNITYSDK_OFFSET(0xA21F650)
#define RPG_CLIENT_ELECTRICCHAINV2_POLYLINE_METHOD_2_19F951B38D2C86E3_OFFSET UNITYSDK_OFFSET(0xA21F990)
#define RPG_CLIENT_ELECTRICCHAINV2_POLYLINE_METHOD_2_49CA198F7882284A_OFFSET UNITYSDK_OFFSET(0xA21F390)
#define RPG_CLIENT_ELECTRICCHAINV2_POLYLINE_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xA21FCC0)
#define RPG_CLIENT_ELECTRICCHAINV2_POLYLINE_METHOD_2_A66B981E1EA3E23D_OFFSET UNITYSDK_OFFSET(0xA21FAC0)
#define RPG_CLIENT_ELECTRICCHAINV2_POLYLINE_SET_LENGTHS_OFFSET UNITYSDK_OFFSET(0xA21FC10)
#define RPG_CLIENT_ELECTRICCHAINV2_POLYLINE__CTOR_OFFSET UNITYSDK_OFFSET(0xA21FC20)

namespace RPG::Client::ElectricChainV2
{
	inline static constexpr unsigned int PolyLine_TypeDefinitionIndex = 67739;

	class PolyLine : public ::RPG::Client::ElectricChainV2::Line
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::ElectricChainV2::Shape*>* polyPoints; // 0x20
		::System::Collections::Generic::List_1<::System::Single>* _lengths; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELECTRICCHAINV2_POLYLINE__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 Method_2_49CA198F7882284A(::System::Single a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELECTRICCHAINV2_POLYLINE_METHOD_2_49CA198F7882284A_OFFSET))(this, a1);
		}

		::System::Single Method_2_19F951B38D2C86E3()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELECTRICCHAINV2_POLYLINE_METHOD_2_19F951B38D2C86E3_OFFSET))(this);
		}

		::System::Void Method_2_A66B981E1EA3E23D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELECTRICCHAINV2_POLYLINE_METHOD_2_A66B981E1EA3E23D_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::Single>* get_lengths()
		{
			return ((::System::Collections::Generic::List_1<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELECTRICCHAINV2_POLYLINE_GET_LENGTHS_OFFSET))(this);
		}

		::System::Void set_lengths(::System::Collections::Generic::List_1<::System::Single>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Single>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELECTRICCHAINV2_POLYLINE_SET_LENGTHS_OFFSET))(this, a1);
		}

		::System::Void Method_2_9681042564541CD6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELECTRICCHAINV2_POLYLINE_METHOD_2_9681042564541CD6_OFFSET))(this);
		}
	};
}
