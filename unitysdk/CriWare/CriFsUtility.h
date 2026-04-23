#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace CriWare { class CriFsBindRequest; }
namespace CriWare { class CriFsBinder; }
namespace CriWare { class CriFsInstallRequest; }
namespace CriWare { class CriFsLoadAssetBundleRequest; }
namespace CriWare { class CriFsLoadFileRequest; }
namespace CriWare { class CriFsRequest_DoneDelegate; }
namespace System { class String; }

#define CRIWARE_CRIFSUTILITY_BINDCPK_1_OFFSET UNITYSDK_OFFSET(0x12C0AE20)
#define CRIWARE_CRIFSUTILITY_BINDCPK_OFFSET UNITYSDK_OFFSET(0x12C0ADC0)
#define CRIWARE_CRIFSUTILITY_BINDDIRECTORY_1_OFFSET UNITYSDK_OFFSET(0x12C0AEE0)
#define CRIWARE_CRIFSUTILITY_BINDDIRECTORY_OFFSET UNITYSDK_OFFSET(0x12C0AE80)
#define CRIWARE_CRIFSUTILITY_BINDFILE_1_OFFSET UNITYSDK_OFFSET(0x12C0AFA0)
#define CRIWARE_CRIFSUTILITY_BINDFILE_OFFSET UNITYSDK_OFFSET(0x12C0AF40)
#define CRIWARE_CRIFSUTILITY_CRIWARE0C80F382_OFFSET UNITYSDK_OFFSET(0x12C0B320)
#define CRIWARE_CRIFSUTILITY_CRIWARE48E31D64_OFFSET UNITYSDK_OFFSET(0x12C0B1E0)
#define CRIWARE_CRIFSUTILITY_CRIWARECD0DC04A_OFFSET UNITYSDK_OFFSET(0x12C0B0A0)
#define CRIWARE_CRIFSUTILITY_INSTALL_1_OFFSET UNITYSDK_OFFSET(0x12C0AC20)
#define CRIWARE_CRIFSUTILITY_INSTALL_2_OFFSET UNITYSDK_OFFSET(0x12C0AC30)
#define CRIWARE_CRIFSUTILITY_INSTALL_3_OFFSET UNITYSDK_OFFSET(0x12C0AB40)
#define CRIWARE_CRIFSUTILITY_INSTALL_OFFSET UNITYSDK_OFFSET(0x12C0AB30)
#define CRIWARE_CRIFSUTILITY_LOADASSETBUNDLE_1_OFFSET UNITYSDK_OFFSET(0x12C0AAD0)
#define CRIWARE_CRIFSUTILITY_LOADASSETBUNDLE_OFFSET UNITYSDK_OFFSET(0x12C0AA70)
#define CRIWARE_CRIFSUTILITY_LOADFILE_1_OFFSET UNITYSDK_OFFSET(0x12C0A980)
#define CRIWARE_CRIFSUTILITY_LOADFILE_2_OFFSET UNITYSDK_OFFSET(0x12C06990)
#define CRIWARE_CRIFSUTILITY_LOADFILE_OFFSET UNITYSDK_OFFSET(0x12C0A8A0)
#define CRIWARE_CRIFSUTILITY_SETPATHSEPARATOR_OFFSET UNITYSDK_OFFSET(0x12C0B280)
#define CRIWARE_CRIFSUTILITY_SETPROXYSERVER_OFFSET UNITYSDK_OFFSET(0x12C0B140)
#define CRIWARE_CRIFSUTILITY_SETUSERAGENTSTRING_OFFSET UNITYSDK_OFFSET(0x12C0B000)
#define CRIWARE_CRIFSUTILITY_WEBINSTALL_OFFSET UNITYSDK_OFFSET(0x12C0AD00)

namespace CriWare
{
	inline static constexpr unsigned int CriFsUtility_TypeDefinitionIndex = 36858;

	class CriFsUtility : public ::System::Object
	{
	public:
		// static const ::System::Int32 DefaultReadUnitSize = 0x100000; // 0x0

		static ::CriWare::CriFsLoadFileRequest* LoadFile(::System::String* path, ::System::Int32 readUnitSize)
		{
			return ((::CriWare::CriFsLoadFileRequest*(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSUTILITY_LOADFILE_OFFSET))(path, readUnitSize);
		}

		static ::CriWare::CriFsLoadFileRequest* LoadFile_1(::System::String* path, ::CriWare::CriFsRequest_DoneDelegate* doneDelegate, ::System::Int32 readUnitSize)
		{
			return ((::CriWare::CriFsLoadFileRequest*(*)(::System::String*, ::CriWare::CriFsRequest_DoneDelegate*, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSUTILITY_LOADFILE_1_OFFSET))(path, doneDelegate, readUnitSize);
		}

		static ::CriWare::CriFsLoadFileRequest* LoadFile_2(::CriWare::CriFsBinder* binder, ::System::String* path, ::System::Int32 readUnitSize)
		{
			return ((::CriWare::CriFsLoadFileRequest*(*)(::CriWare::CriFsBinder*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSUTILITY_LOADFILE_2_OFFSET))(binder, path, readUnitSize);
		}

		static ::CriWare::CriFsLoadAssetBundleRequest* LoadAssetBundle(::System::String* path, ::System::Int32 readUnitSize)
		{
			return ((::CriWare::CriFsLoadAssetBundleRequest*(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSUTILITY_LOADASSETBUNDLE_OFFSET))(path, readUnitSize);
		}

		static ::CriWare::CriFsLoadAssetBundleRequest* LoadAssetBundle_1(::CriWare::CriFsBinder* binder, ::System::String* path, ::System::Int32 readUnitSize)
		{
			return ((::CriWare::CriFsLoadAssetBundleRequest*(*)(::CriWare::CriFsBinder*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSUTILITY_LOADASSETBUNDLE_1_OFFSET))(binder, path, readUnitSize);
		}

		static ::CriWare::CriFsInstallRequest* Install(::System::String* srcPath, ::System::String* dstPath)
		{
			return ((::CriWare::CriFsInstallRequest*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSUTILITY_INSTALL_OFFSET))(srcPath, dstPath);
		}

		static ::CriWare::CriFsInstallRequest* Install_1(::System::String* srcPath, ::System::String* dstPath, ::CriWare::CriFsRequest_DoneDelegate* doneDeleagate)
		{
			return ((::CriWare::CriFsInstallRequest*(*)(::System::String*, ::System::String*, ::CriWare::CriFsRequest_DoneDelegate*))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSUTILITY_INSTALL_1_OFFSET))(srcPath, dstPath, doneDeleagate);
		}

		static ::CriWare::CriFsInstallRequest* Install_2(::CriWare::CriFsBinder* srcBinder, ::System::String* srcPath, ::System::String* dstPath)
		{
			return ((::CriWare::CriFsInstallRequest*(*)(::CriWare::CriFsBinder*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSUTILITY_INSTALL_2_OFFSET))(srcBinder, srcPath, dstPath);
		}

		static ::CriWare::CriFsInstallRequest* Install_3(::CriWare::CriFsBinder* srcBinder, ::System::String* srcPath, ::System::String* dstPath, ::CriWare::CriFsRequest_DoneDelegate* doneDeleagate)
		{
			return ((::CriWare::CriFsInstallRequest*(*)(::CriWare::CriFsBinder*, ::System::String*, ::System::String*, ::CriWare::CriFsRequest_DoneDelegate*))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSUTILITY_INSTALL_3_OFFSET))(srcBinder, srcPath, dstPath, doneDeleagate);
		}

		static ::CriWare::CriFsInstallRequest* WebInstall(::System::String* srcPath, ::System::String* dstPath, ::CriWare::CriFsRequest_DoneDelegate* doneDeleagate)
		{
			return ((::CriWare::CriFsInstallRequest*(*)(::System::String*, ::System::String*, ::CriWare::CriFsRequest_DoneDelegate*))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSUTILITY_WEBINSTALL_OFFSET))(srcPath, dstPath, doneDeleagate);
		}

		static ::CriWare::CriFsBindRequest* BindCpk(::CriWare::CriFsBinder* targetBinder, ::System::String* srcPath)
		{
			return ((::CriWare::CriFsBindRequest*(*)(::CriWare::CriFsBinder*, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSUTILITY_BINDCPK_OFFSET))(targetBinder, srcPath);
		}

		static ::CriWare::CriFsBindRequest* BindCpk_1(::CriWare::CriFsBinder* targetBinder, ::CriWare::CriFsBinder* srcBinder, ::System::String* srcPath)
		{
			return ((::CriWare::CriFsBindRequest*(*)(::CriWare::CriFsBinder*, ::CriWare::CriFsBinder*, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSUTILITY_BINDCPK_1_OFFSET))(targetBinder, srcBinder, srcPath);
		}

		static ::CriWare::CriFsBindRequest* BindDirectory(::CriWare::CriFsBinder* targetBinder, ::System::String* srcPath)
		{
			return ((::CriWare::CriFsBindRequest*(*)(::CriWare::CriFsBinder*, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSUTILITY_BINDDIRECTORY_OFFSET))(targetBinder, srcPath);
		}

		static ::CriWare::CriFsBindRequest* BindDirectory_1(::CriWare::CriFsBinder* targetBinder, ::CriWare::CriFsBinder* srcBinder, ::System::String* srcPath)
		{
			return ((::CriWare::CriFsBindRequest*(*)(::CriWare::CriFsBinder*, ::CriWare::CriFsBinder*, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSUTILITY_BINDDIRECTORY_1_OFFSET))(targetBinder, srcBinder, srcPath);
		}

		static ::CriWare::CriFsBindRequest* BindFile(::CriWare::CriFsBinder* targetBinder, ::System::String* srcPath)
		{
			return ((::CriWare::CriFsBindRequest*(*)(::CriWare::CriFsBinder*, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSUTILITY_BINDFILE_OFFSET))(targetBinder, srcPath);
		}

		static ::CriWare::CriFsBindRequest* BindFile_1(::CriWare::CriFsBinder* targetBinder, ::CriWare::CriFsBinder* srcBinder, ::System::String* srcPath)
		{
			return ((::CriWare::CriFsBindRequest*(*)(::CriWare::CriFsBinder*, ::CriWare::CriFsBinder*, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSUTILITY_BINDFILE_1_OFFSET))(targetBinder, srcBinder, srcPath);
		}

		static ::System::Void SetUserAgentString(::System::String* userAgentString)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSUTILITY_SETUSERAGENTSTRING_OFFSET))(userAgentString);
		}

		static ::System::Void SetProxyServer(::System::String* proxyPath, ::System::UInt16 proxyPort)
		{
			return ((::System::Void(*)(::System::String*, ::System::UInt16))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSUTILITY_SETPROXYSERVER_OFFSET))(proxyPath, proxyPort);
		}

		static ::System::Void SetPathSeparator(::System::String* filter)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSUTILITY_SETPATHSEPARATOR_OFFSET))(filter);
		}

		static ::System::Boolean CRIWARECD0DC04A(::System::String* userAgentString)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSUTILITY_CRIWARECD0DC04A_OFFSET))(userAgentString);
		}

		static ::System::Boolean CRIWARE48E31D64(::System::String* proxyPath, ::System::UInt16 proxyPort)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::UInt16))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSUTILITY_CRIWARE48E31D64_OFFSET))(proxyPath, proxyPort);
		}

		static ::System::Boolean CRIWARE0C80F382(::System::String* filter)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSUTILITY_CRIWARE0C80F382_OFFSET))(filter);
		}
	};
}
